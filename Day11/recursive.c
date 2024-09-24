#include <stdio.h>

void recur(int);
int main()
{
    recur(1);
    return 0;
}
void recur(int num)
{
    if (num <= 3)
    {
        printf("%d", num);
        recur(++num);
    }
}