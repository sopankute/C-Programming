#include<stdio.h>

int main()
{
    // enum color
    // {
    //     RED, PINK, BLUE, RED, GREEN, YELLOW
    // };
    // enum color c1,c2,c3;

    typedef enum color e_c;
 //-----------------------------------------
    // anonymous enum - enum without name
    // enum 
    // {
    //     RED, PINK=1, BLUE, GREEN=8, YELLOW
    // }c1,c2,c3;

    // c1=RED;
    // printf("%d\n",c1);   // 0
    // c2=BLUE;
    // printf("%d\n",c2);   // 2  
    // c3=YELLOW;
    // printf("%d\n",c3);   // 9

    // // c1 = RED++ ;  //not allwed
    // ++c1;
    // printf("%d",c1);


        // typedef 
    //    typedef int INT
        typedef int thor;
        thor num1 = 5;      // you can use just like
        printf("%d", num1);

    return 0;    
}