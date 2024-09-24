#include<stdio.h>

int isPrime(int num);
int main()
{
    int num = 23;
    printf("Enter the No you have to check : %d", num);
    // scanf("%d", &num);
    isPrime(num);
    return 0;
}

int isPrime(int num)
{
    int i;
    for(i=2; i<= num/2; i++)
    {
        if(num % i == 0)
        {
            printf("%d is Not a Prime Number !", num);
            return 0;
        }
    }
    printf("%d is a Prime Number !", num);
    // return 1;
}