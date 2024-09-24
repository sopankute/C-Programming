#include<stdio.h>

int main()
{
    int n ;
    printf("Enter one or more than one digit numbers : ");
    scanf("%d", &n);    // 98357

    while(n != 1)
    {
        if(n % 2 != 0)
           n = n / 2;
    }
    printf("%d cannot be expressed as power of 2", n);
    return 0;
}