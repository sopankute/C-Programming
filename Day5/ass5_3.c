#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
    printf("a is largest number : %d", a);
    if(b >= a && b >= c)
    printf("b is largest number : %d", b);
    if(c >= b && c >= a)
    printf("c is largest number : %d", c);
    return 0;
}