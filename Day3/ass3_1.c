#include<stdio.h>

int main()
{
    int n;
    float result;
    float x, y;
    
    do{
    printf("Enter the two no : ");
    scanf("%f%f", &x, &y);          // 7 4
    printf("Select the operation you want to perform : \n");
    printf("0.Exit \n1. Addition \n2. Substraction \n3. Multiplication \n4. Division \n5. Modulus\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
            result = x + y;
            printf("%f",result);    // 11.000000
        break;
    case 2:
            result = x - y;
            printf("%f",result);    // 3.000000
        break;
    case 3:
            result = x * y;
            printf("%f",result);    // 28.000000
        break;
    case 4:
            result = x / y;
            printf("%f",result);   // 1.750000
        break;
    // case 5:
    //         result = int(x) % int(y);
    //         printf("%f",&result);
    //     break;
    
    default:
             printf("Invalid choice..!");
        break;
    }
    
    }while(n!=0);
    return 0;
}