#include<stdio.h>

void swap(int n1, int n2)
{
    int temp;

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("Num1 : %d \nNum2 : %d", n1, n2);
}
int main()
{
    int num1 = 25, num2 = 52;
    swap(num1, num2);
    return 0;
}