#include<stdio.h>

int main()
{
    printf("%d",res(6));
    return 0;
}
int res(int n)
{
    return(n ? 1 + res(n & n-1) : 0);   // 2
}