#include<stdio.h>

float addition(double x, double y);
int mod(int num, int den);
void multiplication(double a, double b);
void substraction(void);

int main()
{
    int num , den, result;
    double num1 = 13.63, num2 = 7.53, sum;

    sum = addition(num1 , num2);
    printf("Addition = %lf\n", sum);

    printf("Enter the numerator and denominator : ");
    scanf("%d%d", &num, &den);
    result = mod(num , den);
    printf("Modulus = %d\n", result);

    multiplication(12.34 , 7.84);

    substraction();

    return 0;
}

float addition(double x, double y)
{
    double result = x + y;
    return result;
}
int mod(int num, int den)
{
    int div = num % den;
    return div;
}
void multiplication(double a, double b)
{   
    double c = a * b;
    printf("multiplication = %lf\n",c);
}
void substraction(void)
{
    int p, q, r;
    printf("Enter two integer number : ");
    scanf("%d%d", &p, &q);
    r = p - q;
    printf("substraction = %d",r);
}