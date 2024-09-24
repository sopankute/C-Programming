#include <stdio.h>
#include <conio.h>
#define n 6
int main()
{
    int arr1[n] = {9, 8, 7, 2, 4, 3};
    // int arr2[n];
    int temp, i;

    for ( i = 0; i < n / 2; i++)
    {
        temp = arr1[i];
        arr1[i] = arr1[n - i - 1];
        arr1[n - i - 1] = temp;
    }

    for (int j = 0; j < n; j++)
    {
        //  arr1[i] = arr2[j];
        printf("%d,", arr1[j]);
    }
    return 0;
}