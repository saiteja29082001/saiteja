#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/wait.h>
#include<string.h>
int main(int argc,char *argv[])
{
            int fd;
                printf("%s\n",argv[0]);
            char ch[] = "hello"; 
            sscanf(argv[0],"%d",&fd);    
                printf("%d\n",fd);
            write(fd,ch,strlen(ch));
    
}            
