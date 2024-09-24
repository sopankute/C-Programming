#include<stdio.h>

int sum(int x)
{
    if (x != 0)
        return x + sum(x - 1);
    else
        return x;
}
int main()
{
    int n , result = 0;
    printf("Enter number : ");
    scanf("%d", &n);
    result = sum(n);
    printf("Sum of %d Integers is : %d", n, result);
    return 0;
}