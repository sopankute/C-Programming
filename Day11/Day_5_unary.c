#include <stdio.h>

int main()
{
    int a, n = 2; // Increament

    // Prefix
    // a = ++n;
    // 1. increment ++n ( n = n + 1 )
    // 2. assign the updated 'n' to 'a'
    // printf("%d\n",a);
    // printf("%d\n",n);
    // a = 3 and n = 3

    // Postfix
    // a = n++;
    // 1. Assign current value of 'n' to 'a'
    // 2. then Increament itself ( n = n + 1 )
    // printf("%d\n",a);
    // printf("%d\n",n);
    // a = 2 and n = 3

    int b, m = 5; // Decreament

    // Prefix
    // b = --m;
    // 1. decrement ++m ( m = m + 1 )
    // 2. assign the updated 'm' to 'b'
    // printf("%d\n",b);
    // printf("%d\n",m);
    // b = 4 and m = 4

    // Postfix
    // b = m--;
    // 1. Assign current value of 'm' to 'b'
    // 2. then Increament itself ( m = m + 1 )
    // printf("%d\n",b);
    // printf("%d\n",m);
    // b = 5 and m = 4

    return 0;
}