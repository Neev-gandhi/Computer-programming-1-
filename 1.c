#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100];
    printf("enter the string:\n");
    gets(s1);

    int x =strlen(s1);
    printf("%d",x);
    return 0;
}
