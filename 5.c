#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];

    printf("enter the string\n");
    gets(s1);

    printf("%s",strcpy(s2,s1));
    return 0;
}
