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
struct node *traver(struct node *head)
{
    struct node *temp=head;
    while(temp->next->next!=0)
    {
        temp=temp->next;
    }
    return temp;
}


struct node *insertfirst(struct node *head)
{
    struct node *temp=createnode();
    temp->next = head;
    head = temp;
    return head;
}
struct node *deletefirst(struct node *head)
{
    head = head->next;
    return head;
}
struct node *insertend(struct node *head)
{
    struct node *temp=createnode();
    struct node *temp1= traversal(head);
    temp1->next=temp;
    return head;
}
struct node *deleteend(struct node *head)
{

    struct node *temp1= traver(head);
    temp1->next=0;
    return head;
}
struct node *traversal2(struct node *head,int p)
{
    struct node *temp=head;
    int i=1;
    while(i<p)
    {
        i++;
        temp=temp->next;
    }
    return temp;
} 
struct node *traversal1(struct node *head,int p)
{
    struct node *temp=head;
    int i=1;
    while(i<p)
    {
        i++;
        temp=temp->next;
    }
    return temp;
}
struct node *insertany(struct node *head)
{
    int p;
    printf("pos : ");
    scanf("%d",&p);
    struct node *temp=createnode();
    struct node *temp1= traversal1(head,p-1);
    temp->next=temp1->next;
    temp1->next=temp;
    return head;
}
struct node *deleteany(struct node *head)
{
    int p;
    printf("pos : ");
    scanf("%d",&p);
    struct node *temp1= traversal1(head,p-1);
    temp1->next=temp1->next->next;
    return head;
}
struct node *reverse(struct node *head)
{
    struct node *temp=head;

}
int main()
{
    struct node *head=0;
    head=createlist();
    display(head);
    int m;
    printf("\n1.inserfirst\n2.inserlast\n3.insertany\n4.deletefirst\n5.delteend\n6.delteany\noption: ");
    scanf("%d",&m);

    switch(m)
    {
        case 1:head= insertfirst(head);
               display(head);
               break;   
        case 2:head = insertend(head);
                 display(head);
                 break;   
        case 3:head = insertany(head);
               display(head);
               break;   
        case 4:head= deletefirst(head);
               display(head);
               break;   
        case 5:head = deleteend(head);
                  display(head);
                 break;   
        case 6:head = deleteany(head);
               display(head);
               break;   
    }
}

