#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int array[100], n, i, temp, l;

    printf("Enter the size of an array : ");
    scanf("%d", &n);
    l = n - 1;

    printf("Enter elements insert in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i=0; i < n/2; i++)
    {
        temp = array[i];
        array[i] = array[l];
        array[l] = temp;
        l--;
    }
    printf("Reversed array elements are:\n");
    for (i=0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}