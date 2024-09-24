#include <stdio.h>

// int fun(int s);
int main()
{
    // int y, s = 2, t = 5;
    // y = fun(s + 1);
    // printf ("s = %dt = %dy = %d ",s, t, y) ;

    auto int i = 100;
    printf("i = %d\n", i);
    {
        int i = 1;
        printf("i = %d\n", i);
        {
            i += 1;
            printf("i = %d\n", i);
        }
        printf("i = %d\n", i);
    }
    printf("i = %d\n", i);
    return 0;
}
// int t = 8;
// int fun(int s)
// {
//     s++;
//     t++;
//     return (s + 1);
// }