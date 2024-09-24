#include<stdio.h>

int main()
{
     char ch = 'A';
     int num1 = 15;
     float x = 23.56f;
     double y = 23.56;   // by default

     // printf("char = %c\n",ch); 
     // printf("%d\n",ch);
     // printf("%d\n",ch);   // 65
     // printf("integer = %d\n",num1); 
     // printf("float = %f\n",x); 
     // printf("double = %lf\n",y); 
     
     // printf("%d\n",sizeof(ch));     // 1
     //  printf("%d",sizeof('A'));     // 4 -> consider 'A' as an interger implicitly

     // printf("%d\n",sizeof(num1));   // 4
     // printf("%d\n",sizeof(x));      // 4
     // printf("%d\n",sizeof(y));      // 8

     // printf("the size of long long int is: %d\n", sizeof(long long int));  // 8

     // short int num2 = 67; 
     // long int num3 = 45;

     // printf("%hd\n",num2);
     // printf("%ld\n",num3);
     // printf("size of short Integer = %d \n", sizeof(num2));  // 2
     // printf("size of long Integer = %d \n", sizeof(num3));   // 4
     
     // unsigned short int num4 = 33; 
     // unsigned long int num5 = 77;

     // printf("%hd\n",num4);
     // printf("%ld\n",num5);
     // printf("size of unsigned short Integer = %d \n", sizeof(num4));  // 2
     // printf("size of unsigned long Integer = %d \n", sizeof(num5));   // 4
 
     // unsigned int var = 83;
     
     // printf("%d\n", var);   // 83
     // printf("%u\n", var);   // 83 same for unsigned int-> %u & %d



}