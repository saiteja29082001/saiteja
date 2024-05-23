
#include<stdio.h>
#include<string.h>
int k;
void  mystrncpy(char d[],const char s[],int n)
{
	int i,j;
	int s1 =strlen(s);	
	for(i=0;i<n;i++)
	{
		d[i]=s[i];

	}
	d[i]=0;
			
}	
int main()
{
	char d[100],s[100];
	int n;
	scanf("%[^\n]s",s);
	scanf(" %[^\n]d",d);
	scanf("%d",&n);
	mystrncpy(d,s,n);
	printf("%s\n",d);

	return 0;
}	
