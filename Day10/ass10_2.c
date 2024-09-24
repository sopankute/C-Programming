#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Date  
{  
   int dd;  
   int mm;  
   int yyyy;   
};  
struct personal
{
    char name[30];
    double sallary;
    struct Date  
    {  
    int dd;  
    int mm;  
    int yyyy;   
    }doj;
};

int main()
{
    struct personal emp[5];
    int i;
    for( i=1; i<=5; i++)
    {
        printf("Personal No : %d", i);
        printf("Enter The Name : ");
        scanf("%s",emp->name);
        printf("Enter The sallery : ");
        scanf("%lf",&emp->sallary);
        printf("Enter the Date of Join : ");
        scanf("%d %d %d", &emp[i].doj.dd, &emp[i].doj.mm, &emp[i].doj.yyyy);        
    }
    
    return 0;
}