#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
struct msgbuf {
    long mtype;       
    char mtext[100];    
};

int main()
{
    struct msgbuf mes;
    mes.mtype = 143;
    strcpy(mes.mtext,"hi hello");
    int key = 143;
    int id = msgget(key, IPC_CREAT | 0666);
    msgsnd(id,&mes,20,0);

}


