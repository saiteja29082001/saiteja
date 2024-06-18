#include<stdio.h>
#include<unistd.h>
#include <pthread.h>

void *fun(void *ar)
{
    char *r="exit";
    //while(1)
    {

        printf("thread %s\n",(char *)ar);
        sleep(1);
    }
    pthread_exit((void *)r);

}
int main()
{
    pthread_t id;
    char *s="hi";
    void *r=0;
    pthread_create(&id,NULL,fun,(void *)s);

   // while(1)
    {

        printf("main\n");
        sleep(1);
    }

    pthread_join(id,&r);
    printf("%s\n",(char *)r);
    

}
