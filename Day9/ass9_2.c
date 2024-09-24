#include<stdio.h>
#include<conio.h>
#include<string.h>

int isLeapYear(int year)
{
    if((year%4 == 0 && year%100 != 0) || year%400 == 0)
        return 0;
    else
        return 1;

    return 0;    
}
int main()
{
    int year, result;
    printf("Enter the year to check isLeapYear or not  : ");
    scanf("%d",&year);

    result = isLeapYear(year);

    if(result == 0)
        printf("You entered year %d is Leap year ", year);
    else
        printf("You entered year %d is not Leap year ", year);

    return 0;
}
