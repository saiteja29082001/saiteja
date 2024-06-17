#include<stdio.h>
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

        printf("child process a=%d b=%d c=%d\n",++a,b,++c);
    }
    else
    {
        printf("parent process a=%d b=%d c=%d\n",++a,b,++c);
    }
}
