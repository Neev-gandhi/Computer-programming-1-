#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100];
    printf("enter the string");
    gets(s1);

    for (int i=0;s1[i] != '\0';i++ )
    {
        if(s1[i]>= 'A' && s1[i]<= 'Z')
        {
            s1[i]=s1[i]+32;
        }
    }
    printf("string in lowercase:%s\n",s1);
    return 0;
}
