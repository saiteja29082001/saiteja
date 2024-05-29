#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int d;
    struct node *next;
}node;

node *top=0;

void push()
{
    int k;
    scanf("%d",&k);
    printf("push %d\n",k);
    node *temp=(node *)malloc(sizeof(node));
    if(top==0)
    {
        top=temp;
        temp->d=k;
        temp->next=0;
    }
    else
    {
        temp->next=top;
        top=temp;
        temp->d=k;
    }

}
void peek()
{
    printf("peek %d",top->d);
}
void pop()
{
    node *temp=top;
    printf("pop %d\n",temp->d);
    top=temp->next;

    free(temp);
}
void display(){
    node *temp=top;
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
