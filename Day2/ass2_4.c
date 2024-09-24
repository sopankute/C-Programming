#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int x, y;

    printf("Enter the value of x : ");
    scanf("%d", &x);

    y = 6*pow(x,5) + 5*pow(x, 4) - 4*pow(x, 3) + 3*pow(x, 2) + 2*pow(x, 1) + 1;
    
    printf("The value of y : %d", y);

    return 0;
}
// OUTPUT :
// Enter the value of x : 2
// The value of y : 257
// Enter the value of x : 5
// The value of y : 21461