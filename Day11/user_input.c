#include<stdio.h>

int main()
{
    int n;
    char c;
    float f;
    double x;

    printf("Enter the char, int, float and double value :");
    // scanf("%c",&c);
    // scanf("%d\n",&n);
    // scanf("%f\n",&f);
    // scanf("%lf\n",&x);

    scanf("%c%d%f%lf",&c,&n,&f,&x);
    // printf("Enter the all types of char :");
    printf("char = %c, int = %d, float = %f, double = %lf",c,n,f,x);
    return 0;
}