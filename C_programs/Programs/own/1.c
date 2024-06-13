#include<unistd.h>
#include<stdio.h>
void mychar(char c)
{
    write(1,&c,1);
}
void myint(int a){
    if(a/10)
    {
        myint(a/10);
        printf("n:%d: ",a);
    }
    mychar(a%10+'0');
}
int main()
{
    myint(123);
}
