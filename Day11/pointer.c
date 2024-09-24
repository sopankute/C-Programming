#include<stdio.h>

int main()
{
    strcpy(fun(),"hello");
    pritf("%s",fun());
    return 0;
}
char *fun()
   {
       static char str[20];
       return str;
   }