#include<stdio.h>
#include<string.h>
struct node{
    int a;
    char ch[10];
}c;
int mystrchr(char const *d,char const *c)
{
	int i,k,j,p=0,s;
	int d1 =strlen(c);
	for(i=0;d[i]!=0;i++)
	{
		if(d[i]==c[0]);
	        {   
                    s=k=i;
                    for(j=0;c[j]!=0;j++,k++)
                    {
                        if(d[k]==c[j])
                        {
                            p++;
                        }
                    }
                }        
	if(p==d1)
		return s;
        p=0;
	}
		return -1;

			
}	
int main()
{
	char d[100],c[100];

//	scanf("%[^\n]s",d);
//	scanf(" %[^\n]s",c);


//	printf("%d\n",mystrchr(d,c));
	printf("%d\n",sizeof(struct node));
	printf("%d\n",sizeof(c));

	return 0;
}	
