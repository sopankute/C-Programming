#include<stdio.h>

int main()
{
//    char str1[5] = {'A','B','C','D','E'};           // char array
    // printf("%d\n", sizeof(str1));  // 5
   // char str2[6] = {'A','B','C','D','E','\0'};   // String 
    char str3[5] = {'I','n','f','o'};       // also String -> Partial initailisation rest element zero 
    // compiler add rest of element to zero

    char str4[] = {'S','n','b','e','a','m'};  // char array
    int i;
    // for(i=0; str1[i] != '\0'; i++)
    //     printf("%c", str2[i]);

    // for(i=0; str2[i] != '\0'; i++)
    //     printf("%c", str2[i]);

    // for(i=0; str3[i] != '\0'; i++)
    // //    printf("%c", str2[i]);
    //       putchar(str3[i]);

    // char str3[5] = {'I','n','f','o'};         // String -> Partial initailisation  
    // char str4[] = {'S','n','b','e','a','m'};  // char array

    // for(i=0; str4[i] != '\0'; i++)
    //    printf("%c", str4[i]);   // SubeamInfo 
    // copiler prints all string which has memory in stack till it doesn't get \0 


    // Using String literals

    // char str5[5] = "Tech"; // also a String
    // int j=0;
    // while(str5[j] != '\0')
    // {
    //     putchar(str5[j]);   // Tech
    //     j++;
    // }

    // char str4[] = {'S','n','b','e','a','m'};  // this is a char array
    char str6[] = "Aditya"; // but this is a String
    // printf("%s",str6);  // Aditya

    // printf("%d\n", sizeof(str6));   // 7
    // int j=0;
    // while(str6[j] != '\0')
    // {
    //     putchar(str6[j]);  
    //     j++;
    // }
    char str7[20];
    printf("%s", str7);
    
    return 0;
}