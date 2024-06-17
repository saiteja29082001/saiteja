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
    p=fork();
    if(p==0)
    {
        char ch[]= "hello world";
        int fd = open("hi.txt",O_RDWR | O_CREAT, 0666);
        write(fd,ch,sizeof(ch));
        close(fd);
        exit(0);
    }
    else
    {
        wait(0);
        char ch[100];
        int fd = open("hi.txt",O_RDONLY);
        read(fd,ch,sizeof(ch));
        printf("%s \n",ch);
        close(fd);

    }
}
