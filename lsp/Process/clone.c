#define _GNU_SOURCE  // Required to use clone()
#include <stdio.h>
#include <sched.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
int b=1;
int fun(void *a)
{
    printf("fun %d\n",*(int *)a);
}
int main()
{
    pid_t pid;
    int a1=2,a2=5;
    int *st = (int *)malloc(500)+500;
    pid = clone((fun)(&a1),st,SIGCHLD,NULL);
    if(pid==0)
    {

        printf("child process\n");
        exit(0);
    }
    else
    {
        printf("parent process\n");
    }
}

