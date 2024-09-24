#include<stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number : ");
    scanf("%d",&n);     // 10

    printf("the Prime Numbers are : ");
    for(int i=2; i<=n; i++)
    {
        int c=0;
        for(int j=1; j<=i; j++)
        {
            if ((i%j)==0)
            {
                c++;
            }
        }
        if(c == 2)
            printf("%d ",i);     // 2 3 5 7
    }

    return 0;
}