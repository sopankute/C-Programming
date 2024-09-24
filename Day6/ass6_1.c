#include<stdio.h>

int main()
{
    int number, dgt, temp, sum=0;
    printf("Enter the Any digit number : ");
    scanf("%d",&number);

    temp = number;    // 153
    while(number>0)
    {
        dgt = number % 10;
        sum += (dgt * dgt * dgt);
        number /= 10;
    }
    if(sum == temp)
        printf("Armstrong");
    else    
        printf("not Armstrong");

    return 0;
}