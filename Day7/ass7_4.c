#include <stdio.h>
#include<string.h>

void reverse(char str[], int len)
{
    char temp;
    for (int i=0; i < (len-1)/2; i++)
    {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
    printf("now String is : %s", str);
}
int main()
{
    char str[] = "INDIAN";
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    printf("The length of String : %d\n", length);
    reverse(str, length);

    return 0;
}