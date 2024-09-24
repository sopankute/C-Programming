#include<stdio.h>

int main()
{
    float si, P, R, T;
    printf("Enter Principle : ");
    scanf("%f",&P);                // 5000
    printf("Enter Rate : ");
    scanf("%f",&R);                // 3
    printf("Enter Time : ");
    scanf("%f",&T);                // 4
    
    si = P * R * T;                // 60000
    printf("The whole Simple Interest calculated as : %f", si);
    return 0;
}