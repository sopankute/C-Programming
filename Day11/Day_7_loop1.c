#include<stdio.h> 

int main()
{
    // int i=1; 
    // while(i<=5)
    // {
    //     printf("%d ",i); 
    //     i++;  
         
    // }
    // printf("\n Outside the loop:%d",i);  
   
    // int i=1; 
    // while(i<=5)
    // {
    //     printf("%d ",i++); //1 2 3 4 5    
    // }
    // printf("\n Outside the loop:%d",i);  
   
    // int i=1; 
    // while(i<=5)
    // {
    //     printf("%d ",++i);//2 3 4 5 6       
    // }
    // printf("\n Outside the loop:%d",i);  
   

    int i=1; 
    while(i<=5); 
    {
        printf("%d ",++i);
    }
    printf("\n Outside the loop:%d",i);  
     

    // int i=1; 
    // while(++i<=5); 
    // {
    //     printf("%d ",i);
    // }
    // printf("\n Outside the loop:%d",i);  // 6
     
    // int i=1; 
    // while(i++<=5); 
    // {
    //     printf("%d ",i);
    // }
    // printf("\n Outside the loop:%d",i);  // i=7

    //  int i = 1; 
    //  int j = 1; 
    //  int k = 1; 
    //  while(i<=5,j<=10) 
    //  {
    //       printf("i:%d j:%d\n",i,j);  // print both up to j=10 rightmost value
    //       i++; 
    //       j++;  
    //  }  

    //  int i = 1; 
    //  int j = 1; 
    //  int k = 1; 
    //  while(i<=10,j<=5) 
    //  {
    //       printf("i:%d j:%d\n",i,j);  // print both up to j=5 rightmost value
    //       i++; 
    //       j++;  
    //  }

    //  int i = 1; 
    //  int j = 1; 
    //  while(i<=10,j<=5) 
    //  {
    //       printf("i:%d j:%d\n",i,j);  // infinite loop
    //       i++; 
    //       //j++;  
    //  }

    return 0; 
}