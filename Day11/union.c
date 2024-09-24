#include<stdio.h>

int main()
{
    // union Test{
    //     unsigned short int si;
    //     unsigned char ch[2];
    // };
    // union Test var = {257};
    // printf("%d, %d, %d", var.ch[0], var.ch[1], var.si);

    char ch1 = ' ';
    char ch2 = 'A';
    char ch3 = ch1 | ch2;
    printf("ch3 = %d", ch3);
    
    return 0;
}