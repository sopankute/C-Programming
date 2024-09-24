#include<stdio.h>
#include<conio.h>

double average(double n1, double n2)
{
    
    return (double)(n1 + n2)/2;
}
int main()
{
    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf",&num1);
    printf("Enter second number: ");
    scanf("%lf",&num2);

    double avg = average(num1, num2); 
    printf("The average of two numbers %lf and %lf is : %lf", num1, num2, avg);
    return 0;
}