#include<stdio.h>

struct emp{
    int age;
    struct emp *ptr;
};
int main()
{
    struct emp var = (24 , NULL);   
    struct emp *ptr = &var;
    prt -> ptr = ptr;
    printf("%d, %d", ptr -> age, ptr -> ptr ->age);
    return 0;
}

// undefined behaviour(runtime error)