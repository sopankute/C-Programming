// #define GRADE(x,y) x##y

#define SQR(x) x*x
#include<stdio.h>
int main()
{
    // char CDAC[6] = {'C', 'D', 'A', 'C', };        // CDAC
    // char CDAC[6] = {'C', 'D', 'A', '\n', 'C', };  // CDA 
                                                   // C
    // char CDAC[6] = {'C', 'D', 'A', '\r', 'C', };  // CDA
    // char CDAC[6] = {'C', 'D', 'A', '\t', 'C', };  // CDA        C
    // char CDAC[6] = {'C', 'D', 'A', '\f', 'C', };  // CDA♀C
    // char CDAC[6] = {'C', 'D', 'A', '\b', 'C', };  // CDC
    // char CDAC[6] = {'C', 'D', 'A', '\a', 'C', };  // CDAC
    // char CDAC[6] = {'C', 'D', 'A', '\0', 'C', };  // CDA
    // printf("%s",CDAC);

    // int glob = 20;
    // {
    //     extern int glob;
    //     printf("%d", glob); 
    // }
    //     printf("%d", glob);   // linkage error

    // int x=0||5;
    // printf("%d", x);  // true 1


//    int a=200, b=300, ab=400;
//    printf("%d", ab + GRADE(a,b));   // 800

    
    // int a[10] = {10,20,30,40,50};
    //           // 12
    // int *ptr = a;
    // printf("%d", *ptr+=2);   // 12
    // printf("%d", *ptr);   // 12

//    int x = 1, y = 1;
//    x = (y = 35) + 7;
//    printf("%d , %d", x, y);


    // printf("%d", SQR((4+2)));


    int x = 1;
    printf("%d, %d", ~x-x>>1, ~x-x<<1);   // -2  -6

    return 0;
}