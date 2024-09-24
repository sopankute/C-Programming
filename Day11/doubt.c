#include<stdio.h>

int main()
{ 
// problem 1  

     int i=1; 
    while(++i<=5); 
    {
        printf("%d ",i);
    }
    printf("\n Outside the loop:%d",i);  // i=6

// problem 2

 int i=1; 
    while(i++<=5); 
    {
        printf("%d ",i);
    }
    printf("\n Outside the loop:%d",i);  // i=7
}