#include<stdio.h>

int main()
{
    int n, sum = 0, FD, LD;
    printf("Enter more than one digit numbers : ");
    scanf("%d", &n);   // 9374

    LD = n % 10;
    while(n >= 10)
      {
            n = n / 10;
      }
    FD = n;
    sum = FD + LD;    // 9 + 4 = 13
    printf("%d", sum);
    return 0;
}