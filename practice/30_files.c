#include<stdio.h>
int main()
{
	FILE *file;
	file = fopen("r.txt","w");
	fputs("hello world",file);
	char buf[50];
	fclose(file);
	file = fopen("r.txt","r+t");
	fgets(buf,50,file);
	printf("%s ",buf);
	fclose(file);
}	
	
