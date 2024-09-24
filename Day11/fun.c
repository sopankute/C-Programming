#include<stdio.h>

int addition(int a,int b);  
int substraction(int num1, int num2);
float division(float p, float q);
// Function declaration (global declaration)
// you may/may not be declare return type of function for int/void
// compiler consider int return type of function by default
int main()
{
    float div;
    int num1 = 5, num2 = 6, result, ans ;    // Local variable (for main())
    result = addition(num1, num2);     // Function call
                //    num1 & num2      // Actual arguments
                // num1 & num2 are differ from a & b 
                // also  num1 & num2 of substraction function coz scope limit
    printf("result = %d\n", result);

    ans = substraction(num1 , num2);
    printf("ans = %d\n", ans);

    div = division( 13.0f , 6.0f );
    printf("division = %f\n", div);

    return 0;
}
int addition(int a, int b)     // Function defination
        //       a  &   b      // Formal arguments
{
    int c = a + b;
    return c;
}
int substraction(int num1, int num2)
{
    num1 = 7, num2 = 12;
    int sub = num2 - num1;
    return sub;
}
float division(float p, float q)
{
    float div = p / q;
    return div;
}
