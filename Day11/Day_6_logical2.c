#include<stdio.h>

int main()
 {
//     int ans; 
//     int a = 0;
//     int b = 7;
//     ans = a++ && ++b;
//           F  &&  XXX
//     printf("%d,%d,%d",ans, a, b); 
                     //   0   1  7

    // int ans; 
    // int a = -1;
    // int b = 7;
    // ans = ++a && b++;
    //   //   F  &&  XXX
    // printf("%d,%d,%d", a, b, ans);   
    //                 // 0  7  0 

    // int ans; 
    // int a = 5;
    // int b = 0;
    // ans = ++a || b++;
    //   //   T  ||  XXX
    // printf("%d,%d,%d", a, b, ans);   
    //                 // 6  0  1   

    int ans; 
    int a = 4;
    int b = 6;
    ans = --a || b++;
      //   T  ||  XXX
    printf("%d,%d,%d", a, b, ans);   
                    // 3  6  1   

    return 0;
}