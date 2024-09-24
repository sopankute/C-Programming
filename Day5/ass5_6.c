#include<stdio.h>

int main()
{
    int n , count = 1;
    printf("Enter one or more than one digit numbers : ");
    scanf("%d", &n);    // 92472

    while(n >= 10)
    {
        count++;
        n = n / 10;
    }
    printf("The no. of digit contain by number : %d", count);   // 5

    return 0;
}