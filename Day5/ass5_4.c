#include<stdio.h>

int main()
{
    int p, q, multi = 1, i = 0;
    printf("Enter two numbers : ");
    scanf("%d %d", &p, &q);         // 4^6

    if(p > 0 && q >= 0)
    {
        while(i < q)
        {
            multi = multi * p;
            i++;
        }
        printf("The result is : %d", multi);    // 4096
    }
    return 0;
}