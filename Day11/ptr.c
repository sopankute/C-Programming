#include <stdio.h>

int i = 0;
int val();
int main()
{
    // int *c;
    // int *check();
    // c = check(10, 20);
    // printf("c = %d", c);

    printf("main's i = %d\n", i);
    i++;
    int  val();
    printf("main's i = %d\n", i);
    int  val();
    return 0;
}
int val()
{
    i = 100;
    printf("val's i = %d\n", i);
    i++;
}
// *check(int i, int j)
// {
//     int *p, *q;
//     p = &i;
//     q = &j;
//     i >= 45 ? return(p) : return(q);
// }
