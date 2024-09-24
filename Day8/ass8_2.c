#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Good Morning";
    char str2[30];
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';
    printf("String s2: %s", str2);
    return 0;
}