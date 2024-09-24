#include<stdio.h>

int main()
{
    int a=1, b=-1, c=0, d;
    d = ++a && ++b || c--;

    if(d)
        printf("Kolkata \n");
    else if(c)
        printf("Delhi \n");
    else
        printf("Bangalore \n");

    return 0;
}