#include<stdio.h>
int main()
{
    int y = 10;
    int z = y + (y == 10);   // 11
    printf("%d",z);
    return 0;
}