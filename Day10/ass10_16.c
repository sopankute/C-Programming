#include<stdio.h>

// void fun()
// {
//     static int count = 1;
//     printf("number of time function called : %d\n", count++);
// }
void main()
{
    // // static int n = 10;
    // fun();
    // fun();
    // fun();
    // fun();

    // return 0;
    int a=5,b=5;
    printf(“\n%d    %d”,a--,--b);
printf(“\n%d    %d”,a--,++b);   
printf(“\n%d    %d”,++a,b--);
printf(“\n%d    %d”,a,b);
}