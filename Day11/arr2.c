#include <stdio.h>

// int change(int *b);
int main()
{

    // static int b[] = {10, 20, 30, 40, 50};
    // int i, *k;
    // k = &b[4] - 4;
    // for (i = 0; i <= 4; i++)
    // {
    //     printf("%d\n", *k);
    //     k++;
    // }

    // static int a[5] = {2, 8, 7, 3, 6};
    // int i;
    // change(a);
    // for (i = 4; i>=0; i--)
    // printf("%d", a[i]);

    // int arr[] = {0, 1, 2, 3, 4};
    // int *ptr, i;
    // for (ptr = arr + 4; ptr >= arr; ptr--)
    //     printf("%d", arr[ptr - arr]);

    // static int a[] = {0, 1, 2, 3, 4};
    // static int *p[] = {a, a + 1, a + 2, a + 3, a + 4};
    // int **ptr = p;
    // printf("%d  %d\n", a, *a);
    // printf("%d  %d  %d\n", p, *p, **p);
    // printf ("%d  %d  %d\n", ptr, *ptr, **ptr); 

    static int a[]= { 0,1,2,3,4}; 
static int *p[ ] = {a, a + 1, a + 2, a + 3, a + 4} ; 
int **ptr = p; 

printf("%d\n",p);
printf("%d\n",ptr);
printf("%d\n",*ptr);
printf("%d\n",a);
ptr++; 
printf ("%d %d %d\n", ptr - p, *ptr - a, **ptr);

*ptr++; 
printf("%d\n",*ptr);
printf ("%d %d %d\n", ptr - p, *ptr - a, **ptr );

*++ptr;
printf ("%d %d %d\n", ptr - p, *ptr - a, **ptr); 

++*ptr; 
printf ("%d %d %d\n", ptr - p, *ptr - a, **ptr);

    return 0;
}

// int change(int *b)
// {
//     int i;
//     for (i = 0; i <= 4; i++)
//     {
//         *b = *b + 1;
//         b++;
//     }
// }