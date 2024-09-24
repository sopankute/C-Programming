#include<stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter the number : ");
    scanf("%d",&n);                 // 5

    int i = 1;
    while(i<=n)
        {    
            fact=fact * i;
            i++;
        }
     printf("the factorial is : %d", fact); // 120

    return 0;
}