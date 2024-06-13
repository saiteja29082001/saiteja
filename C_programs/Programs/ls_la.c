#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
int main(int argc,char *argv[])
{
    struct dirent *file;
    char *dir = NULL;
        if(argc < 2)
            dir = ".";
        else
            dir = argv[1];
        
    DIR *d = opendir(dir);

while ((file = readdir(d)) != NULL)
        printf("%s\n", file->d_name);

    closedir(d);

}

