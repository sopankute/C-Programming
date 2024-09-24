#include<stdio.h>
#include<string.h>
int main()
{
    
    // char str1[] = "sunbeam Infotech";
    // char *str2  = "sunbeamInfotech";
    // char str3[] = "sunbeam\0Infotech";

    // printf("%d\n", sizeof(str1));   // 17
    // printf("%d\n", sizeof(str2));   // 8
    // printf("%d\n", sizeof(str3));   // 17

    // printf("%d\n", strlen(str1));   // 16
    // printf("%d\n", strlen(str2));   // 15
    // printf("%d\n", strlen(str3));   // 7

    // printf("%s\n",str1);  // sunbeam Infotech
    // printf("%s\n",str2);  // sunbeamInfotech
    // printf("%s\n",str3);  // sunbeam

    // printf("%s\n",strcpy(str1 , str3)); 


    // int a[5] = {1,2,3,4,5};
    // int i;
    // for(i=0; i<5; i++)
    // {
    //     if((char)a[i] == '5')
    //     {
    //         printf("%d\n", a[i]);
    //     }
    //     else
    //     {
    //         printf("FAIL\n");
    //     }
    // }
    // printf("C programming %s","Class by\n%sSanfoundary","Wow");

    char *str = "x";
    char c = 'x';
    char ary[1];
    ary[0] = c;
    printf("%d, %d",strlen(str), strlen(ary));
    return 0;
}