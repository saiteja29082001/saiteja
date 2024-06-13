
#include<stdio.h>
#include<string.h>
int mystrncmp(const char d[],const char s[],int n)
{
	int i,j=0;
	int d1 =strlen(d);
	int s1 =strlen(s);	
	for(i=0;i<n;i++)
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
	if(j==n)
		return 0;
			
}	
int main()
{
	char d[100],s[100];

	scanf("%[^\n]s",d);
	scanf(" %[^\n]s",s);
	int n;
	scanf("%d",&n);
	printf("%d\n",mystrncmp(d,s,n));

	return 0;
}	
