#include<stdio.h>

int main()
{
    // Logical Operator (AND = &&, OR==||, NOT== ~)


    // int a = 0;
    // int b = 3;
    // int ans = a && b;    // 0 && XXX -> 0 it doesn't go right side to check whether true/false
    // printf("%d\n",ans);

    // int a = 2;
    // int b = 3;
    // int ans = a && b;  // 1 && 1 -> 1
    // printf("%d\n",ans);

    // int a = 0;
    // int b = 0;
    // int ans = a && b;    // 0 && XXX -> 0 it doesn't go right side to check whether true/false
    // printf("%d\n",ans);

    // int a = -3;
    // int b = 0;
    // int ans = a && b;    // 1 && 0 -> 0 
    // printf("%d\n",ans);

// OR operator
    // int a = -3;
    // int b = 0;
    // int ans = a || b;    // 1 || XXX -> 1 it doesn't go right side to check whether true/false
    // printf("%d\n",ans);

    // int a = 2;
    // int b = 3;
    // int ans = a || b;      // 1 || XXX -> 1 it doesn't go right side to check whether true/false
    // printf("%d\n",ans);

    // int a = 0;
    // int b = 0;
    // int ans = a || b;     // 0 || 0 -> 0
    // printf("%d\n",ans);

    int a = 0;
    int b = 2;
    int ans = a || b;     // 0 || 1 -> 1
    printf("%d\n",ans);
    
    return 0;
}