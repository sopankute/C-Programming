#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float n, result;

    printf("Enter the number to find exponent : ");
    scanf("%f",&n);

    result = exp(n);
    printf("The result is : %f", result);
    return 0;
}