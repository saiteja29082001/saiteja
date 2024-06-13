#include<stdio.h>
int main()
{
    int a[10],a1[10]={0};
    int i,j,k=0,n=10,m,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                
            if(a[i]==a[j] && i!=j)
            {
               k++;                                
          }
        }
        for(m=0;m<n;m++)
        {
            if(a1[m]==a[i])
                s++;
        }
        if(k>=1 && s==0)
        {
        printf("%d num  %d times\n",a[i],k+1);
        a1[i]=a[i];
        }
        k=0;
        s=0;
    }

}
