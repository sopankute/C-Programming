#include<stdio.h>
#include<conio.h>

int checkPrime(int n)
{
    for (int i=2; i<=n/2; i++)
    {
        if(n%2 != 0)
            continue;
        else
            return 1;
    }
    return 0;
}
int main()
{
    int num, result=0;
    printf("Enter the number to check isPrime or Not : ");
    scanf("%d",&num);
    result = checkPrime(num);
    
    if(result == 0)
        printf("%d Is a Prime number ",num);
    else    
        printf("%d Is Not a Prime number ",num);
    return 0;
}