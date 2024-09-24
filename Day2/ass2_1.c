#include<stdio.h>

int main()
{
    
    float l,b,h;
    
    float result;

    printf("Enter the values of length, breadth and height : ");

    scanf("%f %f %f",&l,&b,&h);

    result = l * h * b;   

    printf("Result: %f", result);  

    return 0;
}