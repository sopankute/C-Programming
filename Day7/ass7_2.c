#include<stdio.h>
#include<stdio.h>
#include<conio.h>

int main()
{

    char ch[] = "Problem Solving by C Programming.";
    char ch1[10][20];
    int i, j=0, k=0, m=0, n=0, max=0, min=0;

    for( i=0; ch[i] != '\0'; i++)
    {
        if(ch[i] == ' ')
       {
            ch1[k][j] = '\0';
            k++;
            j=0;
       } 
       else
       {
           ch1[k][j] = ch[i];
           j++;
       }
    }
    
    ch1[k][j] = '\0';
    max = strlen(ch1[0]);
    min = strlen(ch1[0]);
    for( i = 0; i <= k; i++)
    {
        if(max < strlen(ch1[i]))
        m=i; 
        if(min > strlen(ch1[i]))
        n=i;
    }
    printf("Largest Word = %s and \n Smallest Word = %s", ch1[m], ch1[n]);


    return 0;
}