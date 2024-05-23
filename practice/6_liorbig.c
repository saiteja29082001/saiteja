#include<stdio.h>
int main()
{
	int a=0x12345678;
	
	a=(((a&0x000000ff)<<24) | ((a&0xff000000)>>24) | ((a&0x00ff0000)>>8) | ((a&0x0000ff00)<<8));
	printf("%x\n",a);


}
