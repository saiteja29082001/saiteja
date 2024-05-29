#include<stdio.h>
struct node {
    int a;
    struct node *p;
    struct node *n;

}

struct node * createnode()
{
     struct node *t=(struct node *)malloc(sizeof(struct node));
     scanf("%d",&t->a);
        t->p=0;
        t->n=0;
        return t;
}

struct node * createlist()
{
    int a=1;
    struct node *h=0;
    struct node *t=0;
    struct node *new=0;
    while(a)
    {
        printf("create or not 0 or 1 :");
        scanf(" %d",&a);
        new=createnode();
        if(h==0)
        {
            h=t=new;
        }
        else{
             ZZ
        }
    }
}


int main()
{
    struct node *h=0;

}
