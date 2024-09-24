#include<stdio.h> 

int main()
{
    // int a = 1;
    // int b = 2; 
    // int c = 3; 

    // a+=b+=c+=1; // += --> 3  
    // c = c + 1 // 3 + 1 --> 4 
    // b = b + c // 2 + 4 --> 6 
    // a = a + b // 1 + 6 --> 7   

    // printf("a=%d b=%d c=%d",a,b,c); 

    // int a;
    // a = 3;   
    // a = 3, 4;      // a=3
    // a = 3, 4, 5;   // a=3
    // a = (3, 4);       // a=4   rightmost value assigned to a
    // a = (3, 4, 5);    // a=5 

    // a = ((3, 4), 5);     // a=(4, 5) -> a=5
    // printf("%d",a);


    int ans, x = 3;

    // ans = ++x, ++x, ++x;
    // printf("%d %d",ans , x);
       // ans = 4 and x = 6

    // ans = x++, x++, x++;
    // printf("%d %d", ans , x); 
        // ans = 3 and x = 6   


    // ans =(++x, ++x, ++x);
    // printf("%d %d", ans , x);  
       // ans = 6 and x = 6 

    
    // ans =(x++, x++, x++);
    // printf("%d %d", ans , x); 
        // ans = 5 and x = 6    
        return 0;
}