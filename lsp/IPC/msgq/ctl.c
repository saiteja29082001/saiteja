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

    int key = 143;
    int id = msgget(key, 0666);
    msgctl(id,IPC_RMID,0);

}


