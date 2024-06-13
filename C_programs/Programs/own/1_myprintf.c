#include<unistd.h>
#include<stdarg.h>

void mychar(char c)
{
    write(1,&c,1);
}
void myint(int a){
    if(a/10)
    {
        myint(a/10);
    }
    mychar(a%10+'0');
}
void mystring(const char *p)
{
    while(*p)
    {
        mychar(*p++);
        
    }
}
void my_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    const char *p=format;
    while(*p)
    {
        if(*p=='%' && *(p+1))
        {   
            p++;
            switch(*p)
            {
                case 'c':{char c = (char)va_arg(args,int);
                         mychar(c);
                         break;}
                case 'd':{int k = va_arg(args,int);
                         myint(k);
                         break;}
                case 's':{const char *p = va_arg(args,const char *);
                         mystring(p);
                         break;}
            }
        }
        else{
        mychar(*p);

        }
        p++;
    }
    va_end(args);
}
int main()
{
//    mychar('k');
    my_printf("int : %d\n",1);
    my_printf("char : %c\n",'a');
    my_printf("string : %s\n","hello");
}
