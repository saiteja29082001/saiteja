#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
    pid_t p;
    mkfifo("pipe",0777);
        char ch[]= "hello world";
        int fd = open("pipe",O_WRONLY);   
        printf("%d",fd);
        write(fd,ch,sizeof(ch));
        close(fd);
        exit(0);
}
