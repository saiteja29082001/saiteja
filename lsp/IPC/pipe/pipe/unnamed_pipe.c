#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/wait.h>
#include<string.h>
int main()
{
    pid_t p;
    int pipe_un[2];
    
    if(pipe(pipe_un)==0){
        printf("pipe sucess\n");
    }
    p=fork();

        if(p==0)
        {
            char ch[]= "hello world";
            write(pipe_un[1],ch,sizeof(ch));
            printf("%d",pipe_un[1]);
            exit(0);
        }
        else
        {
            wait(0);
            char ch[100];
            memset(ch,'\0',strlen(ch));
            read(pipe_un[0],ch,sizeof(ch));
            printf("%s \n",ch);
        }    
}
