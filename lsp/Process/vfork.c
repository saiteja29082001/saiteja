#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int b=1;
int main()
{
    pid_t pid;
    int a=2;
    int c=3;
    pid = vfork();

    if(pid==0)
    {

        printf("child process a=%d b=%d c=%d\n",a,b,++c);
        exit(0);
    }
    else
    {
        printf("parent process a=%d b=%d c=%d\n",a,b,++c);
    }
}
