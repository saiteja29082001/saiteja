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
    printf("hiii");
    mkfifo("pipe",0777);
    printf("h");
    p=fork();
    if(p==0)
    {
        printf("hi");
        char ch[]= "hello world";
        int fd = open("pipe",O_WRONLY);   
        printf("%d",fd);
        write(fd,ch,sizeof(ch));
        close(fd);
        exit(0);
    }
    else
    {
        wait(0);
        char ch[100];
        int fd = open("pipe",O_RDONLY);   
        printf("%d",fd);
        read(fd,ch,sizeof(ch));
        printf("%s \n",ch);
        close(fd);

    }
}
