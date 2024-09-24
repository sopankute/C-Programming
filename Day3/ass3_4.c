#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the first numbers : ");
    scanf("%d", &x);
    printf("Enter the second numbers : ");
    scanf("%d", &y);

    if(x > y)
    printf("x is Greater than y");
    else
    printf("y is Less than x");
    
    return 0;
}