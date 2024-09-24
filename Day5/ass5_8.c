/*Sum of the series*/
#include<stdio.h>

int main()
{
    int i, n;
    float sum = 0.0f;

    printf("Enter the number : ");
    scanf("%d",&n);      // 6

    for(i=1; i<=n; i++)
    {
        sum += (1.0 / i);
    }

    printf("sum of the series : %f", sum);  // 2.450000
    return 0;
}