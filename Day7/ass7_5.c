#include<stdio.h>
#include<conio.h>

int power(int b, int e)
{
    if(e != 0)
        return (b * power(b,e-1));
    else
        return 1;
}
int main()
{
    int base, exp, result=0;
    printf("Enter the Base number : ");
    scanf("%d",&base);
    printf("Enter the exponent : ");
    scanf("%d",&exp);
    result = power(base, exp);
    printf("%d^%d = %d", base, exp, result);
    return 0;
}