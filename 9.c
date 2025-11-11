#include<stdio.h>
#include<string.h>
int main()

{
    char s1[100],s2[100];
    printf("enter 1st string \n");
    gets(s1);
    printf("enter 1st string \n");
    gets(s2);

    printf("the concatenated string is:\n");
    strcat(s1,s2);

    printf("%s",s1);

    return 0;
}
