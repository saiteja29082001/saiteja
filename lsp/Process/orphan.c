#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
       #include <unistd.h>

int b=1;
int main()
{
    pid_t pid;
    int a=2;
    pid = fork();
    int c=3;
    if(pid==0)
    {

        printf("child process a=%d b=%d \n",getpid(),getppid());
        sleep(20);
        printf("child process a=%d b=%d \n",getpid(),getppid());

    }
    else
    {
        printf("child process a=%d\n",getpid());
        exit(0);
    }
}
