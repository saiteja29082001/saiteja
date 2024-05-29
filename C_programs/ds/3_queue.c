#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int d;
    struct node *next;
}node;

node *e=0;
node *s=0;

void push()
{
    int k;
    scanf("%d",&k);
    printf("enque %d\n",k);
    node *temp=(node *)malloc(sizeof(node));
        temp->d=k;
        temp->next=0;
    if(e==0&& s==0)
    {
        e=s=temp;

    }
    else
    {
        e->next=temp;
        e=temp;
    }

}
void peek()
{
    printf("peek %d",s->d);
}
void pop()
{
    if(s==0 || e==0)
    {
        printf("delete not possible\n");
    }
    else
    {
    node *temp=s;
    printf("deque %d\n",temp->d);
    s=temp->next;
    free(temp);
    }
}
void display(){
    node *temp=s;
    if(s==0 && e==0)
    {
        printf("no elements\n");
    }
    while(temp!=0)
    {
        printf("%d\n",temp->d);
        temp=temp->next;
    }
}

int main()
{
    int a;
    while(1)
    {
        printf("select : ");
        scanf("%d",&a);
        switch(a)
        {
            case 1:push();
                   break;
            case 2: pop();
                    break;
            case 3: peek();    
                    break;
            case 4: display();
                    break;
        }
    }

    push(3);
    push(1);
    display(); 
    peek();
    pop();
    push(6);
    display(); 
}
