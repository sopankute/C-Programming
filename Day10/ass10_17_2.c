#include<stdio.h>

int main()
{
    extern int myvar;
    printf("my var is : %d", myvar);
    return 0;
}