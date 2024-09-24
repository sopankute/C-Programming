#include<stdio.h>

int main()
{
    int r = 10;
    float volume = 0;
    float PI = 22.0f / 7.0f;
    volume = (4.0f / 3.0f) * PI * (r * r * r);         // 4190.476074

    // volume = (4 / 3) * PI * (r * r * r);            // 3142.857178
    printf("The volume of sphere is : %f", volume);
    return 0;
}
// OUTPUT : 
// The volume of sphere is : 4190.476074
