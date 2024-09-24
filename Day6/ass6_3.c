#include<stdio.h>

int main()
{
    int number, m=0, flag = 0;
    printf("Enter the a number : ");
    scanf("%d",&number);     // 13
    m = number / 2;

    for(int i=2; i<=m; i++)
    {
        if((number%2) == 0)
        {
            printf("Number is Not Prime");
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("number is prime ");
    return 0;
}