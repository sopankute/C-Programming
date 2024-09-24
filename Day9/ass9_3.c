#include<stdio.h>
#include<conio.h>

int factorial(int n)
{
    int f=1;
    if(n==0 && n==1)
        return 1;
    else
    {
        for(int i=2; i<=n; i++)
            f = f * i;
    }
    return f;

    return 0;
}
int main()
{
    int num, fact;
    printf("Enter the number to find Factorial : ");
    scanf("%d",&num);

    fact = factorial(num);
    printf("The Factorial of %d is : %d", num, fact);
    return 0;
}