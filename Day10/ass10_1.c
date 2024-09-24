#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student
{
    int id;
    char gender;
    char name[30];
};

int main()
{
    struct student std1;
    struct student *std2;

    std1.id = 45;
    std1.gender = 'M';
    strcpy(std1.name, "Kute Sopan");

    std2 = &std1;

    printf("The id : %d\n", std2->id);
    printf("Gender : %c\n", std2->gender);
    printf("The name : %s\n", std2->name);
    
    std2->id = 33;
    // std2->gender = 'M';
    strcpy(std2->name, "Rohit Sharma");
    printf("After change \n");
    printf("The id : %d\n", std1.id);
    printf("Gender : %c\n", std1.gender);
    printf("The name : %s\n", std1.name);
    
    return 0;
}