#include<stdio.h>

int main()
{
    int arr[] = {23, 48, 38, 95, 27, 49, 39, 83};

    int temp, i;
    for(i=0; i<8/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[7-i];
        arr[7-i] = temp;
    }
    for (i = 0; i < 8; i++)
    {
    printf("%d ",arr[i]);   // 83 39 49 27 95 38 48 23 
    }
    return 0;
}   