#include<stdio.h>

int main()
{
    int num1, num2, i, n1, n2, result=1;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);       // 25 35

    // n1 = (num1/2);
    // n2 = (num2/2);

    for(i=1; i<=num1 && i<=num2; i++)
    {
        if((num1%i)==0 && (num2%i)==0)
        result = i;
    }

    printf("The Greatest Common Divisor of two numbers is : %d", result);   // 5

    return 0;
}