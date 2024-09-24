#include<stdio.h>
#include<string.h>

int main()
{
 
	char p[] = "Assignment";
	char t;
	int i;
    int j = strlen(p);
	for(i = 0 ; i < j/2 ; i++)
	{
		t = p[i];
		p[i] = p[j-i-1];
		p[j-i-1] = t;
	}
	printf("%s" , p);

    return 0;
}
