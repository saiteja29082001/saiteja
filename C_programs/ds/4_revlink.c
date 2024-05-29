#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

struct node * createnode()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&temp->data);
    temp->next=0;
    return temp;
}

struct node * createlist()
{
    struct node *head=0,*next=0,*temp=0;
    char c='y';
    while(c=='y')
    {
        next=createnode();
        if(head == 0)
            head=temp=next;
        else
        {
            temp->next=next;
            temp=next;
        }
        printf("create node y or n : ");
        scanf(" %c",&c);
    }
    return head;
}

struct node *traversal(struct node *head)
{
    struct node *temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    return temp;
}
struct node *rev(struct node *head)
{
    struct node *b=0;
    struct node *p=head;
    struct node *n=head;
    while(p!=0)
    {
        p->next=b;
            b=p;

        p=p->next;     

    }
    return p;
}

int main()
{
    struct node *head=0;
    head=createlist();
    display(head);
 head=   rev(head);    
    printf("hi\n");
    display(head);
}

