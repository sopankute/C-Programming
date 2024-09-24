#include<stdio.h>

int main()
{

    int number, dgt, temp, sum=0;
    printf("Enter the Any digit number : ");
    scanf("%d",&number);

    temp = number;    // 121
    while(number>0)
    {
        dgt = number % 10;
        sum = (sum * 10) + dgt;
        number /= 10;
    }
    if(sum == temp)
        printf("Palidrome");
    else    
        printf("not Palindrome");

    return 0;
}