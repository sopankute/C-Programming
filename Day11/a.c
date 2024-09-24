#include <stdio.h>
#include<string.h>
int main()
{
    // double A , r;
    // printf("enter =\n " );
    // scanf("%lf",&r);

    // A = 3.14 * r * r;
    // printf("Area of circle = %lf \n", A);

    union
    {
        unsigned long l;
        unsigned int d[2];
        char ch[4];
    }a;
    printf("%d\n", sizeof(a));
    strcpy(a.ch, "ABC");
    printf("%s\n", a.ch);
    printf("%u %u\n", a.d[0], a.d[1]);
    printf("%lu", a.l);
    return 0;
}
