#include<stdio.h>


void bubble(int a[],int n)
{
    int k,s;
    for(int i=0;i<n-1;i++)
    {
        s=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[s]>a[j])
                s=j;
        }

        {
            k=a[i];
            a[i]=a[s];
            a[s]=k;
        }
    }
}

int bin(int a[],int l,int h,int n)
{
    int m;
    while(l<=h)
    {
        m=l+(h-l)/2;
        if(a[m]==n)
            return a[m];
        if(a[m]<n)
            l=m+1;
        else if(a[m]>n)
            h=m-1;
    }
    return -1;
}



int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubble(a,n);
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
    printf("%d",bin(a,0,n-1,5));
}


