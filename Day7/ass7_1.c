#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    int up=0, low=0, i=0;
    // char ch[30] = "Hello from CDAC hyderabad";
    char ch[30] = "This is a CDAC Course";

    while (ch[i] != '\0')
    {
        if(ch[i] >= 'A' && ch[i] <= 'Z')
        up++;
        if(ch[i] >= 'a' && ch[i] <= 'z')
        low++;

        i++;
    }
     printf("UpperCase letters are : %d\n",up);
     printf("LowerCase letters are : %d",low);

    return 0;
}