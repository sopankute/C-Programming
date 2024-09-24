#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "hello, good morning ";
    int i, count=0;

    for(i=0; str1[i] != '\0'; i++)
    {
        count++;
    }
    printf("Length of the string : %d",count);

    return 0;
}