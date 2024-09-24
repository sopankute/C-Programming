#include<stdio.h>
#include<string.h>

void concat(char s1[],char s2[])
{
    int i, j;
    i = strlen(s1);
    for(j=0; s2[j] != '\0'; i++, j++)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
}
int main()
{
    char str1[] = "hello, good morning ";
    char str2[] = "This is c-Programe.";

    concat(str1, str2);
    printf("Concated String is : %s", str1);

    return 0;
}