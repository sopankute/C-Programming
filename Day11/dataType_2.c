#include<stdio.h>
#include<limits.h>

int main()
{
    // int x = 47;
    // char ch = 'a';
    // printf("%8d\n",x);
    // printf("%-8d\n",x);
    // printf("%.3d\n",x);
    
    // printf("%d\n", INT_MAX);
    // printf("%d\n", INT_MIN);
    // printf("%u\n", UINT_MAX);

    // printf("%hd\n",SHRT_MAX);
    // printf("%hd\n",SHRT_MIN);
    // printf("%d ",USHRT_MAX);

    // printf("%d\n", SHRT_MAX);
    // printf("%d\n", SHRT_MIN);
    // printf("%d\n",USHRT_MAX);

    printf("%o\n", 0100);    // 100 Ocatl
    printf("%d\n", 0100);    // 65 Octal -> Decimal
    
    printf("%x\n", 0100);    // 40 Ocatl -> Hexa
    printf("%o\n", 0x25);    // 45 Hexa -> Ocatl

    // printf("%x", 0x25);      // 25 Hexa-Decimal
    // printf("%d", 0x25);      // 2537 Hexa -> Decimal
}

