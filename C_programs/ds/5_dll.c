#include<stdio.h>
#include<stdlib.h>
struct node {
    int a;
    struct node *p;
    struct node *n;

};

struct node * createnode()
{
    struct node *t=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&t->a);
    t->p=0;
    t->n=0;
    return t;
}
void display(struct node *temp)
{
    while(temp!=0)
    {
        printf("%d ",temp->a);
        temp=temp->n;
    }
}
struct node * createlist()
{
    int a;
        printf("create or not 0 or 1 :");
        scanf(" %d",&a);
    struct node *h=0;
    struct node *t=0;
    struct node *new=0;
    while(a)
    {

        new=createnode();
        if(h==0)
        {
            h=t=new;
        }
        else{
            t->n=new;
            new->p=t;
            t=new;
        }
        printf("create or not 0 or 1 :");
        scanf(" %d",&a);
    }
    return h;
}

struct node * inserts(struct node *h)
{
    struct node *t=createnode();
    t->n=h;
    h=t;
    return h;

}
struct node * trav(struct node *h)
{
    while(h->n!=0)
    {
        h=h->n;
    }
    return h;
}
struct node * inserte(struct node *h)
{
    struct node *t=createnode();
    struct node *t1=trav(h);
    t1->n=t
    return h;
}
int main()
{
    struct node *h=0;
    h=createlist();
    display(h);
    h=inserts(h);
    display(h);

}
