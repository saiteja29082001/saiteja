#include<stdio.h>

void insertion(int a[],int n)
{
int k,j;
    for(int i=1;i<n;i++)
    {
        k = a[i];
        j=i-1;
        while(j>=0 && k>a[j])
        {
           a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
    }    

}


int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertion(a,n);
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);

}
