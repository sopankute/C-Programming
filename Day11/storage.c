#include <stdio.h>

// int ext = 30;   // 30 OR
// int extfun(void);
// int main(void)
// {
//     extern int ext;
//     printf("Ext = %d ", ext);
//     extfun();
//     return 0;
// }
// // int ext = 10;  // 10
// int extfun(void)
// {
//     int ext = 20;
//     printf("%d\n", ext);   // 20
// }

// static char char1 = 'A';
// extern char char2 = 'B';
// //   char char2 = 'B';
// register char char3 = 'C';
// void mystorage(void)
// {
//     printf("%c %c %c\n", char1, char2, char3);
// }
// int main(void)
// {
//     printf("%c %c %c\n", char1, char2, char3);
//     mystorage();
//     return 0;
// }

// int main()
// {
//     int a = 1;
//     int *p = &a;
//     int *q = p;
//     *p = *p + *q;
//     printf("%d %d %d %d %d", a, *p, *q, p, q);

//     return 0;
// }

// int demo(char p1, char p2)
// {
//     char p3;
//     p3 = ~p1 + ~p2;
//     printf("%d %d\n", p1, p2);
//     return p3;
// }
// int main(void)
// {
//     char p1 = 255, p2 = 256;
//     // printf("%d %d\n", p1, p2);
//     // printf("%d %d\n", p1++, p2--);
//     printf("%d %d\n", ~p1++, ~p2--);
//     char p3 = demo(~p1++, ~p2--);
//     // printf("%d\n", p1);
//     printf("%d %d %d\n", p1, p2, p3);
//     return 0;
// }

int main(void)
{
    // double arr[3];
    // char *p1, **p2;
    // printf("%u, ", sizeof(arr) + sizeof(arr[0]));
    // printf("%u\n", sizeof(*p1) + sizeof(*p2) + sizeof(p1) +
    //                    sizeof(p2));
    // printf("%u\n",sizeof(arr));
    // printf("%u\n",sizeof(arr[0]));
    // printf("%u\n",sizeof(*p1));
    // printf("%u\n",sizeof(*p2));
    // printf("%u\n",sizeof(p1));
    // printf("%u\n",sizeof(p2));
    // printf("%d\n",p2);

    int a = 10;
    int *ptr = &a;
    // printf(" %d %d ", a, ++*ptr);
    printf(" %d %d ", a, *ptr++);
    return 0;
    return 0;
}