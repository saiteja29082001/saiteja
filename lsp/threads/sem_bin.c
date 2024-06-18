#include<stdio.h>
#include<unistd.h>
#include <pthread.h>
#include <semaphore.h>

sem_t a,
void *fun(void *ar)
{
    char *r="exit";
    while(1)
    {
       sem_post(&a);
        printf("thread %s\n",(char *)ar);
        sleep(1);
    }
    pthread_exit((void *)r);

}
int main()
{
    pthread_t id;
    sem_init(&a,0,0);)
    sem_init(&a,1,0);)
    char *s="hi";
    void *r=0;
    pthread_create(&id,NULL,fun,(void *)s);

    while(1)
    {

        printf("main\n");
        sleep(1);
    }

    pthread_join(id,&r);
    printf("%s\n",(char *)r);
    

}
