#include<stdio.h>
#include<string.h>
int k,*p=0;
void  mystrcat(char d[],const char s[],int n)
{
	int i,j;
	int d1 =strlen(d);
	int s1 =strlen(s);	
	for(i=d1,j=0;i<d1+n;i++,j++)
	{
		d[i]=s[j];

	}
	d[i]=0;
			
}	
int main()
{
	char d[100],s[100];
	int n;
	scanf(" %[^\n]s",d);
	scanf(" %[^\n]s",s);
	scanf(" %d",&n);
	mystrcat(d,s,n);
	printf("%s\n",d);

	return 0;
}	
