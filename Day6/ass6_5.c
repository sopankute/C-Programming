#include<stdio.h>
// #include<conio.h>

int main()
{

    int max=0, length = 5, arr[length];
    printf("The length of the array : %d", length);
    printf("\nEnter the array Elements : \n");
    for(int i=0; i<length; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }       
    for(int i=0; i<length; i++)
    {
        // printf("arr[%d] : %d\n", i, arr[i]);
        if(arr[i] > max)
            max = arr[i];
    }
    printf("The Largest Number : %d", max);
        
    return 0;
}