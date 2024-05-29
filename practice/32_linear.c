#include<stdio.h>

int lin(int ar[],int a,int n)
{
    for(int i=0;i<a;i++)
    {
        if(ar[i]==n)
            return i;
    }
    return -1;
}
int main()
{
    int a=5,n;
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("enter search element: ");
    scanf("%d",&n);
    printf("element found :%d",lin(ar,a,n));
}
