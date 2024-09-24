#include<stdio.h>
// void mergeArray(int arr1[], int size1, int arr2[], int size2, int arr3[]);


void readArray(int arr[], int size )
{
    printf("Enter the elements : \n");
    for(int i=0; i<size; i++)
    {
        printf("Enter an arr[%d] : ",i);
        scanf("%d", &arr[i]);
    }
}
void printArray(int arr[], int size )
{
    printf("\nElements are : \n");
    for(int i=0; i<size; i++)
    {
        printf("arr[%d] : %d\n",i, arr[i]);
    }
    printf("\n");
}
void mergeArray(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i=0, j=0;
     for(i=0; i<size1; i++)
        arr3[i] = arr1[i];

     for(i=5, j=0; i<size2+5; i++, j++)
        arr3[i] = arr1[i];
}
int main()
{
    int arr1[5];
    int arr2[5];
    int arr3[10];

    readArray(arr1, 5);
    readArray(arr2, 5);

    mergeArray(arr1, 5, arr2, 5, arr3);

    printArray(arr3, 10);
    return 0;
}