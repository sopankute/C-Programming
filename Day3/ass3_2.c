#include<stdio.h>

int main(){
    int x = 3, y = 8;
    int a, b, c;

    a = x & y;
    printf("a = %d\n", a);   // 0 
    b = x | y;
    printf("b = %d\n", b);   // 11
    c = x ^ y;
    printf("c = %d\n", c);   // 11

    int d = ~x;
    printf("d = %d\n", d);   // -4

    return 0;
}   
    
    