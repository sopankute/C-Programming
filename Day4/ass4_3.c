#include<stdio.h>

int main()
{
    
    int num1, num2, num3;
    printf("Enter the three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 <= num2 && num1 <= num3)
        printf("num1 is smallest number among three");
    else if(num2 <= num1 && num2 <= num3)
        printf("num2 is smallest number among three");
    else
        printf("num3 is smallest number among three");

    return 0;
}