#include <stdio.h>
#include<stdlib.h>

#define E exit(0)
// #define DEF
// #define THIS
// #define THAT
// #define CUBE(X)(X*X*X)
int main()
{
    // int i = 2;
    // #ifdef DEF
    //   printf("squareof i = %d", i * i);
    // #else
    //   printf("i = %d", i);
    // #endif

    // #ifdef THIS
    //     #ifdef THAT
    //         printf ("Definitions are hard to digest");
    //     #else
    //         printf ("But once mugged up, hard to forget");
    //     #endif
    //     #endif

    // int a, b = 3;
    // a = ++b * (++b * ++b);
    // // a = CUBE(++b)/ ++b;
    // printf("a = %db = %d", a, b);

    int i = 4;
    if (i <= 5)
        E;
    else
        printf("Get out anyway!");
    printf("WELL!");

    return 0;
}