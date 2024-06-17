#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
int b=1;
int main()
{
    pid_t pid;
    int a=2;
    pid = fork();
    int c=3;
    if(pid==0)
    {
        execl("hi","1","2",NULL);    
        exit(0);
    }
    else
    {
        printf("parent process pid=%d ppdi=%d\n",getpid(),getppid());
        wait(0);
    }
}
