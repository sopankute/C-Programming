#include <stdio.h>

int main()
{

    // struct a
    // {
    //     int i;
    //     char ch[2];
    // };
    // union b
    // {
    //     int i;
    //     char c[2];
    // };
    // printf("%d\n", sizeof(struct a));
    // printf("%d", sizeof(union b));

    // struct a
    // {
    //     int i;
    //     char ch[4];
    // };
    // struct a s;

    // s.i = 512;
    // printf("%d %d %d", s.i, s.ch[0], s.ch[1]);

    // union b
    // {
    //     int i;
    //     char c[2];
    // };

    // union b u;
    // // u.i = 256;
    // u.c[0] = 3;
    // u.c[1] = 2;
    // printf("%d\n", sizeof(union b));
    // printf("%d %d %d", u.c[0], u.c[1],  u.i);   // 3 2 512

    struct a 
    {
    int i;
    int j;
    };
    struct b
    {
    char x;
    char y[3];
    };
    union c
    {
        struct a aa;
        struct b bb;
    };
     union c u;

    u.aa.i = 512;
    u.aa.j = 512;

    printf ("%d %d\n", u.bb.x, u.bb.y[0]);
    printf("%d %d", u.bb.y[1], u.bb.y[2]);

    return 0;
}