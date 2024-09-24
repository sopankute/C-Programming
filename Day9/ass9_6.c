#include<stdio.h>
#include<conio.h>
#define N 7

int main()
{
    int a[N], key, i, count=0;

    printf("Enter elements to insert in array : \n");
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched : ");
    scanf("%d",&key);
    printf("\n");
    for (i=0; i < N; i++)
    {
        if(a[i] == key)
        {
            printf("%d is present at location %d\n", key, i);
            count++;
        }
    }
            printf("%d is present in array %d times", key, count);
    return 0;
}