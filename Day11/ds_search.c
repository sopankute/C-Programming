#include<stdio.h>

#define SIZE 10
#define true 1
#define false 0

int comparison;
typedef int bool_t;

void display_array_elements(int arr[]);
bool_t linear_search(int arr[], int key);
bool_t binary_search(int arr[], int key);
int main()
{
    int key;
    // int arr[SIZE] = {60, 40, 50, 20, 100, 90, 10, 70, 80, 30};
     int arr[SIZE] = {10,20,30,40,50,60,70,80,90,100};
     int i;
     display_array_elements(arr);

    printf("Enter the key : ");
    scanf("%d", &key);

    // if(linear_search(arr, key))
    if(binary_search(arr, key))
        printf("%d Key is not found in array, no of comparison : %d\n", key, comparison);
    else
        printf("%d Key is found in array, no of comparison : %d\n", key, comparison);
    return 0;
}
void display_array_elements(int arr[])
{
    int index;
    printf("Array elements are : ");
    for(index=0; index < SIZE; index++)
    {   
        printf("%4d",arr[index]);
    }
    printf("\n");                      
}

bool_t binary_search(int arr[], int key)
{
    int left = 0;
    int right = SIZE -1;
    int comparison = 0;

    // while(left>right)   // array invalid
    while(left <= right)
    {
        int mid = (left + right)/2;
        comparison++;

        if(key == arr[mid])
        return true;

        if(key < arr[mid])
        right = mid - 1;
        else
        left = mid + 1;
    }
    return 1;
}