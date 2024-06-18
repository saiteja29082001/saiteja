#include<stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
struct msgbuf {
    long mtype;       
    char mtext[100];
};

int main()
{
    int key = 143;
    struct msgbuf mes;
    int id = msgget(key,0666);
    msgrcv(id,&mes,20,0,0);
    
    printf("%ld",mes.mtype);
    printf("%s ",mes.mtext);


}


