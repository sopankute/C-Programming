#include<stdio.h>

int main()
{

    // int a, b ,c;
    // c = (a=10, b=20, a+b);
    // printf("\n%d, %d, %d", a, b, c);

    // int x, y, z;
    // x=y=z=1;
    // z = ++x || ++y && ++z;
    // printf("\n%d, %d, %d", x, y, z);

    // int x=10, y=20, z=0, i;
    // i = x<y<z;
    // printf("\n%d", i);

    // int i=-3, j=2, k=0, m;
    // m = ++i && ++j || ++k;
    // printf("\n%d, %d, %d, %d", i, j, k, m);

    // m = ++i || ++j && ++k;
    // printf("\n%d, %d, %d, %d", i, j, k, m);

    // m = ++i && ++j && ++k;
    // printf("\n%d, %d, %d, %d", i, j, k, m);

    // m = ++i || ++j || ++k;
    // printf("\n%d, %d, %d, %d", i, j, k, m);


    // int i = 2;
    // int j = 2 + (1, 2, 3, 4, 5);
    // printf("%d\n", j);


    // int i=1;
    // for(;;)
    // {
    //     printf("%d",i++);    // i = 1
    //     if(i<10)
    //        break;
    // }


    // short i = 0;
    // for(i<=5 && i>=-1; ++i; i>0 )
    // {
    //    printf("%u\n", i);    // infinite loop
    // //    printf("%d\n", i);    // infinite loop
    // }

    // char  ch;
    // if(ch = printf(1234))       // give an error
    //   printf("it matters \n");
    //   else
    //   printf("it doesn't matters \n");


    // int i;  // default value of int is zero (0)
    // switch(i)
    // {
    //     // printf("Hello...\n");   // will never execute  
    //     case 0:
    //             printf("Hi\n");
    //             break;
    //     case 1:
    //             printf("Bye\n"); 
    //             break;       
    //     printf("Hello...\n");   // executed
    // }


    // int a = 500, b = 100, c;
    // if (!a >= 400)
    //    b = 300;
    // c=200;
    // printf("B = %d, C = %d ", b, c);


    // int i = 5;
    // while(i-- >= 0)
    // {
    //     printf("%d\n",i);  // 4 3 2 1 0 -1
    // }
    // i = 5;
    // while(i-- >= 0)
    // {
    //     printf("%i\n",i);  // 4 3 2 1 0 -1
    // }
    // while(i-- >=0)  // becomes false
    // {
    //     printf("%d\n", i);  // doesn't print
    // }
    //     printf("%d\n", i);   // -3

    // int i;
    // for(;scanf("%d", &i); printf("%d", i))   // no output

//problem        
    // unsigned short int i = 65534;
    // while(i++ != 0)        // i = 65534
    //     printf("%u\n",i);  
    //     // i = 65534 
    //     // i = 0

    // int j=1;
    // while(j<=255)
    // {
    //     printf("%c, %d", j, j);
    //     j++;
    // }
    // int i = 1;
    // printf("%c",i);  // print character

//problem
    // char j=1;   // infinite loop
    // // int j=1;   // print 1 to 255
    // while(j<=255)
    // {
    //     printf("%d", j);
    //     j++;
    // }

    // int i=10 , j=15;
    // if(i%2 == j%3)
    //     printf("success\n");
    // else
    //     printf("failed\n");

// problem    
    // int x=1, y=1;
    // for(;y;printf("\n %d %d", x, y))
    // y = x++ <= 5;

    // char ch = -127;
    // unsigned char ch1 = -127;
    // printf("ch = %d, ch1 = %d", ch, ch1);

    // int x = -2;
    // if(x++ || x==0)
    //     printf("X");   // X

   
    

    return 0;
}