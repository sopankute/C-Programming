#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);       // 7
    int i, j;

    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        { 
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}