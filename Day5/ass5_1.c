#include<stdio.h>

int main()
{
    int x, y, z;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &x, &y, &z);

    if(x >= y && x >= z)
        printf("x is Largest number.");
    else if(y >= x && y >= z)
        printf("y is Largest number.");
    else
        printf("z is Largest number.");
    
    return 0;
}