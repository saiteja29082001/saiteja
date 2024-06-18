#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

#define PIPE_NAME "pipe"
#define BUFFER_SIZE 100

int main() {
    pid_t p;

    printf("Creating named pipe...\n");
    if (mkfifo(PIPE_NAME, 0777) == -1) {
        perror("mkfifo failed");
        exit(1);
    }

    printf("Forking process...\n");
    p = fork();

    if (p < 0) {
        perror("fork failed");
        exit(1);
    }

    if (p == 0) {
        // Child process
        printf("Child: Starting\n");
        char message[] = "hello world";
        int fd = open(PIPE_NAME, O_WRONLY);
        if (fd == -1) {
            perror("Child: open for writing failed");
            exit(1);
        }
        printf("Child: Writing to pipe, fd = %d\n", fd);
        if (write(fd, message, sizeof(message)) == -1) {
            perror("Child: write failed");
            close(fd);
            exit(1);
        }
        close(fd);
        printf("Child: Finished\n");
        exit(0);
    } else {
        // Parent process
        wait(NULL);
        printf("Parent: Starting\n");
        char buffer[BUFFER_SIZE];
        memset(buffer, 0, sizeof(buffer));
        int fd = open(PIPE_NAME, O_RDONLY);
        if (fd == -1) {
            perror("Parent: open for reading failed");
            exit(1);
        }
        printf("Parent: Reading from pipe, fd = %d\n", fd);
        if (read(fd, buffer, sizeof(buffer)) == -1) {
            perror("Parent: read failed");
            close(fd);
            exit(1);
        }
        printf("Parent: Received message: %s\n", buffer);
        close(fd);

        // Clean up by removing the named pipe
        if (unlink(PIPE_NAME) == -1) {
            perror("unlink failed");
            exit(1);
        }
        printf("Parent: Finished\n");
    }

    return 0;
}

