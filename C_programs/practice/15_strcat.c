
#include<stdio.h>
#include<string.h>
int k,*p=0;
void  mystrcat(char d[],const char s[])
{
	int i,j;
	int d1 =strlen(d);
	int s1 =strlen(s);	
	for(i=d1,j=0;i<=s1+d1;i++,j++)
	{
		d[i]=s[j];

	}
	d[i]=0;
			
}	
int main()
{
	char d[100],s[100];

	scanf("%[^\n]s",s);
	scanf(" %[^\n]s",d);
	mystrcat(d,s);
	printf("%s\n",d);

	return 0;
}	
