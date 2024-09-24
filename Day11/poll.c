#include<stdio.h>
#define COL 3
#define ROW 3
int main(void)
{
    int arr[][] ={{1,2,3},{1,2},{1}},i,j;
    for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    printf("%d", arr[i][j]);
    return 0;

}