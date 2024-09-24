#include<stdio.h>
#define PI 3.142

int main()
{
    float r = 6;
    float area, circumference;

    area = PI * r * r;                   // 113.112000
    printf("the area of circle is :");
    printf("%f\n", area);

    circumference = 2 * PI * r;         // 37.703999 
    printf("the circumference of circle is : %f",circumference);

    return 0;

}
// OUTPUT : 
// the area of circle is :113.112000
// the circumference of circle is : 37.703999