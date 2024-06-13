#include<stdio.h>

void selection(int a[],int n)
{
int k,small;
    for(int i=0;i<n-1;i++)
    {
        small = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[small])
            {
                small=j;
            }
        }
                k=a[small];
                a[small]=a[i];
                a[i]=k;
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    selection(a,n);
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);

}
