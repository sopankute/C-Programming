#include<stdio.h>
#include<conio.h>
#include<string.h>

struct time_struct 
{  
   int hr;  
   int min;  
   int sec;   
}time;  

int main()
{
    time.hr = 12;
    time.min = 36;
    time.sec = 23;

    printf("Hour : Minute : Second - %d:%d:%d ",time.hr, time.min, time.sec);
   
    return 0;
}