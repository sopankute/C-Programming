#include<stdio.h>

int main()
{

    // float discount, amount;

    // printf("Enter your amount have to pay : ");
    // scanf("%f", &amount);

    // if(amount >= 5000)
    // {
    //     amount = amount * 0.90;
    // printf("Heyy you got the 10 per of discount on purchasing of 5000/-..!!");
    // }
    // printf("Your Amount = %f\n", amount);


    char ch; 
    printf("Enter the character"); 
    ch = getchar( ); // scans the sign character  
    //scanf("%c",&ch); 

    // putchar(); // printf("%c",ch); 

    // 0 - 9 ==> 48 - 57 
    
    if(ch>=97 && ch<=122)
         printf("Lower case \n");
    else
    {
          if(ch>=65 && ch<=90)
              printf("Upper case\n"); 
          else
          {
                if(ch>=48 && ch<=57)
                    printf("Digit");
                else
                    printf("Special symbol"); 
          }
              
    }
     

    return 0;
}