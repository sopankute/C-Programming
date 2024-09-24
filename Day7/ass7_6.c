#include<stdio.h>
#include<conio.h>

int main()
{
    int n, rem, a[16], i=0;
    printf("Enter number to convert into the Binary Equivalent : ");
    scanf("%d", &n);

    while(n)
    {
        rem = n % 2;
        n /=2;
        a[i] = rem;
        i++;
    }
    for( int j=i-1; j>=0; j--)
    {
        printf("%d ", a[j]);
    }
    
    return 0;
}