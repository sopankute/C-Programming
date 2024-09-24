#include<stdio.h>
#include<conio.h>
#include<string.h>

struct cricket
{
    char player_name;
    char team_name;
    double bat_avg;
};
int main()
{
    struct cricket player[50];
    int i;
    for(i=1; i<=4; i++){
    printf("Enetr name of player : ");
    scanf("%s",player[i].player_name);
    printf("Enter Team name : ");
    scanf("%s",player[i].team_name);
    printf("Enter the Batting Average : ");
    scanf("%lf",player[i].bat_avg);

    }

    for(i=1; i<=4; i++)
    {
        
    }
    return 0;
}