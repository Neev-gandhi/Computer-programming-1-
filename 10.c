#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("Enter the elements of the string:\n");
    gets(s1);

    for (int i=0;s1[i]!='\0' ;i++ )
    {
        printf("%c\n",s1[i]);
    }
    return 0;
}
