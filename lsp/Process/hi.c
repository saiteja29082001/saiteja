#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc,char *argv[])
{
    for(int i=0;i<argc;i++)
        printf("%s ",argv[i]);
        printf("\n");
        printf("child process pid=%d ppdi=%d\n",getpid(),getppid());
    return 0;
}
