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

        char ch[100];
        int fd = open("pipe",O_RDONLY);   
        printf("%d",fd);
        read(fd,ch,sizeof(ch));
        printf("%s \n",ch);
        close(fd);

}
