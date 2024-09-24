#include <stdio.h>
#include <string.h>

int main()
{
    // static char s[] = "C smart!!";
    // int i;
    // for (i = 0; s[i]; i++)
    //     printf("%c %c %c %c\n", s[i], *(s + i), i[s], *(i + s));

    // static char s[25] = "The cocaine man";
    //     int i = 0;
    // char ch;
    // ch = s[++i];
    // printf("%c  %d\n", ch, i);
    // ch = s[i++];
    // printf("%c  %d\n", ch, i);
    // ch = i++[s];
    // printf("%c  %d\n", ch, i);
    // ch = ++i[s];
    // printf("%c  %d\n", ch, i);

    // static char a[] = "Able was | ere | saw elbA";
    // char *t, *s, *b;
    // s = a;
    // b = a + (strlen(a) - 1);
    // t = b;

    // while (s != t)
    // {
    //     printf("%c", *s);
    //     s++;
    //     printf("%c", *t);
    //     t--;
    // }

    // static char *mess[] = {
    //     "Some love one",
    //     "Some love two",
    //     "I love one",
    //     "That is you"};
    // printf("%d %d", sizeof(mess), sizeof(mess[1]));

   double sopan = 87.635;
   float sopan = 87.635;

   float sopan = 87.635;



    static char mess[2][2][30] = {
        {
            "A chink in your armour",   // 0
            "A voice in your mailbox"    // 1
          },
          {
            "A foot in your tooth",   //0
            "A hole in your pocket"}};   //1
    printf("%s\n%s", mess[1][0], mess[0][1]);
    return 0;
}