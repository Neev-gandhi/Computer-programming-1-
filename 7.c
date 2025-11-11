#include<stdio.h>
int main()
{
    int temp;
    char s1[100];
    printf("Enter the string:\n");
    gets(s1);

    char s2[100];
    for (int k=0;k<100;k++ )
    {
        if(s1[k]=='\0')
        {
            temp=k;
            break;
        }
    }

    for (int i=temp-1,j=0;i>-1 ;i-- )
    {
        s2[j++]=s1[i];
    }
    s2[temp]='\0';
    printf("the string after reversing is:\n");
    for (int i=0;s2[i]!='\0';i++)
    {
        printf("%c",s2[i]);
    }
    return 0;
}
