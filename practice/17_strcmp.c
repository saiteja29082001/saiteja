
#include<stdio.h>
#include<string.h>
int mystrcmp(const char d[],const char s[])
{
	int i,j=0;
	int d1 =strlen(d);
	int s1 =strlen(s);	
	for(i=0;i<s1||i<d1;i++)
	{
		if(d[i]==s[i])
		{
			j++;
		}
		else if(d[i]>s[i])
			return 1;
		else if(d[i]<s[i])
			return -1;
	}
	if(j==s1)
		return 0;
			
}	
int main()
{
	char d[100],s[100];

	scanf("%[^\n]s",d);
	scanf(" %[^\n]s",s);

	printf("%d\n",mystrcmp(d,s));

	return 0;
}	
