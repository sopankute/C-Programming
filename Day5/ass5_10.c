#include<stdio.h>

int main()
{
    int number, n, i, sum = 0;
    printf("Enter number to find factors : ");
    scanf("%d", &number);   // 8128
    n = (number/2);

    for(i=1; i<=n; i++)
    {
        if((number%i)==0)
        {  
             printf("%d ",i);
            sum += i; 
        }      
    }
    //    printf("%d",number);
    //    printf("%d",sum);
    if(number == sum)
        printf("\n%d is Perfect number ",number);   // ans
    else 
        printf("\n%d is Not Perfect number ",number);   

    return 0;
}