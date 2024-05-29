//Write a C program to swap two variables without using a temporary variable 
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 values for swap : ");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapped values %d %d\n",a,b);
	return 0;
}	
