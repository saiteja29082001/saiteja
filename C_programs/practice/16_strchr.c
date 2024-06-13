
#include<stdio.h>
#include<string.h>

int mystrchr(char d[],char c)
{
	int i;
	int d1 =strlen(d);
	for(i=0;i<d1;i++)
	{
		if(d[i]==c)
			return i;	

	}
	return -1;
			
}	
int main()
{
	char d[100],c;

	scanf("%[^\n]s",d);
	scanf(" %c",&c);

	printf("%d\n",mystrchr(d,c));

	return 0;
}	
