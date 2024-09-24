#include<stdio.h>


int main()
{
     int num; 
    num = 0; 
    switch (num)
    {
    
        case 1: 
        printf("A"); 
        break;
       case 2<1:   //case 2:   2<1 -> 0 
        printf("A Again"); 
        break;    
    
    default:
        break;
    }    


    //  char ch = 'A'; 
    // switch (ch)
    // {
    // case 'A': 
    //     printf("A"); 
    //     break;
    
    // case 65: //case label value has already appeared in this switch at line 10
    //     printf("A Again"); 
    //     break;    
    
    // default:
    //     break;
    // }    


    //  char ch; 
    // printf("Enter the character : ");
    // ch = getchar(); 

    //  switch (ch)
    //  {
    //  case 'A':
    //  case 'a':
    //      printf("A for Android");  
    //      break;
    
    //  case 'B': case 'b': 
    //       printf("B for Basic"); 
    //       break;  
     
    //   case 'C':
    //   case 'c': 
    //       printf("C for C programming"); 
    //       break; 

    //   case 'D':
    //   case 'd': 
    //       printf("D for Database"); 
    //       break;    
     
    //  default:
    //      printf("No idea"); 
    //      break;
    //  }   


    // int num; 

    // printf("Enter the number : ");
    // scanf("%d",&num); 

    // switch(num) //1
    // {
    //      case 1: case 12:  
    //        printf("One");
    //        break;   // jump statment  
    //      case 2: 
    //        printf("Two");
    //        break;   

    //      case 3: 
    //        printf("Three");  
    //        break;      

    // }
    // printf("\nOutside the switch"); 

    return 0; 
}