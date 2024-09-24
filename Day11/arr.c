#include <stdio.h>

int extfun(void);
int main()
{
    // int i;
    // int arr[4] = {11,22,33,44};
    // int *ptr = arr;
    // for (i = 0; i < 4; i++)
    // {
        // printf("%d\n", arr[i]);

        // printf("%d\n", i[arr]);

        // printf("%d\n",*(arr+i));

        // printf("%d\n",*(i+arr));
    // }
    // for (i = 0; i < 4; i++)
    // {
        // printf("%d\n", ptr[i]);

        // printf("%d\n", i[ptr]);

        // printf("%d\n",*(ptr+i));

        // printf("%d\n",*(i+ptr));

        // printf("%d ", &arr[i]);
        // printf("%d\n", *ptr);
        // ptr++;
        // printf("%d\n", *arr);
        // arr++;
    // }

    // int  j = 10, arrsize;
    // int arr[10];
    // if (j == 10)
    //     arrsize = 20;
    // else
    //     arrsize = 40;
    // for (i = 0; i < arrsize; i++)
    //     arr[i] = 100;


    
    // int a = 1000000L;
    // for(a=0; a<10; ++a);
    // {
    //  printf("%d",a);
    // }

    //  int i;
    // for(i=0; i<=5; ++i);

    //  printf("Execuse Me !!\n  %d\n",i);
    // {
    //     printf("hello world !!\n");

    // }



{
extern int ext;
printf("Ext = %d ", ext);
extfun();
return 0;
} 

int ext = 10;

int extfun(void);
{
int ext = 20;
printf("%d\n",ext);
}
    return 0;
}