#include<stdio.h>

int main()
{
    int x;
    printf("Enter a value of x : ");
    scanf("%d",&x);

    if(x == 0)
       printf("You entered zero value.");
    else if(x > 0)
       printf("You entered Positive value.");
    else
       printf("You entered Negative value.");

    return 0;
}