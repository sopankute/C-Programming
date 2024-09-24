#include <stdio.h>
// #define var(a) 10
int main()
{
    // const int a = 5;
    // printf("%d", a);

    // printf("%d", '\n' - '\r');

    // int x = 300;
    // printf("%u", x * x / x);

    // int x;
    // x = -3 * -4 % -6 / -5;
    // printf("x = %d", x);

    // int g = 300 * 300 / 300;
    // printf ("g = %d",g);

    // int i = 400 * 400 / 400;
    // if (i == 400)
    //     printf("Filibusters");
    // else
    //     printf("Sea gherkins");

    // int i = 1;
    // for (;;)
    // {
    //     printf("%d  ", i);
    //     i = i + 1;
    //     if (i > 10)
    //         break; /* takes control out of the loop */
    // }

    // int i, j;
    // for (i = 1, j = 10; i + j < 25; i = i + 1, j = j + 1)
    // printf ("%d %d \n", i,j);

    // int j = 1;
    // while (j <= 255);
    // {
    //     printf("%c%d\n", j, j);
    //     j++;
    // }
    // printf("hi");

    // int i = 3, j;
    // j = ++i * ++i * ++i;
    // printf("%d", j);     // 150 how

    // void message();
    // int c;
    // printf("c before call = %d\n", c);
    //  message();
    // printf("c after call = %d", c);

    // int k = 35, *z, *y;
    // z = &k;
    // // I *suppose address of k is 1008 * /
    // y = z;
    // *z++ = *y++;
    // k++;
    // printf("k = %d z = %d y = %d", k, z, y);

    // int z = 4;
    // printf(" %d", printf("%d  %d", z, z));

    float a = 7.999999;
    float *b, *c;
    b = &a;
    c = b;
    printf("%d %d %d\n", &a, b, c);
    printf("%d %d %d %d\n", a, *(&a), *b, *c);
    return 0;
}
// void message()
// {
//     printf("Only he will survive who is C-fit");
// }