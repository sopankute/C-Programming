#include<stdio.h>

int main()
{
    int rank;

    START:

    printf("enter your current Rank : ");
    scanf("%d",&rank);

    if(rank >= 1 && rank <= 5)
        goto END;
    else
        goto START;
        
    END:    
        printf("good, congrats !!");   
    return 0;

}