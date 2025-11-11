#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("enter 1st string\n");
    gets(s1);
    printf("enter 2nd string\n");
    gets(s2);

    if(strcmp(s1,s2)>0)
    {
        printf("%s is lexicographically greater than %s",s1,s2);
    }
    else if(strcmp(s1,s2)<0)
    {
        printf("%s is lexicographically  smaller than %s",s1,s2);
    }
    return 0;
}
