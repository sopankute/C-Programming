#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main()
{
    int base;
    float exp, result=0;
    printf("Enter the base number : ");
    scanf("%d",&base);
    printf("Enter the exponent : ");
    scanf("%f",&exp);

    result = pow(base, exp);
    printf("The power of %d : %f", base, result);

    return 0;
}