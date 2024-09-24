#include<stdio.h>

int main()
{
    int a=1, b=2, c=3;
    if(c>b>a)  // 3>2>1 = 1>1 = false
        printf("true");
    else
        printf("false");    
    return 0;
}