#include<stdio.h>

int main()
{
    // char ch = 755;  // -128 to 127
    // printf("%d",ch);    // -13

    // char ch1 = 512;
    // printf("%d\n",ch1);    // 0

    // unsigned char ch = 755;  // 0 to 255
    // printf("%d",ch);        // 243    which is in the range of 0 to 255

    short int num = 90000;
    printf("%hd", num);     // 24,464
    return 0;
}