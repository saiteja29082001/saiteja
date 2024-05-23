
#include<stdio.h>
#include<string.h>
int k;
void  mystrcpy(char d[],const char s[])
{
	int i,j;
	int s1 =strlen(s);	
	for(i=0;i<=s1;i++)
	{
		d[i]=s[i];

	}
	d[i]=0;
			
}	
int main()
{
	char d[100],s[100];

	scanf("%[^\n]s",s);
	scanf(" %[^\n]d",d);
	mystrcpy(d,s);
	printf("%s\n",d);

	return 0;
}	
