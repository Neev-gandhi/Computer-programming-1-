#include<stdio.h>
int main()
{
    int x=0,temp;
    char s1[100];
    printf("Enter the string:\n");
    gets(s1);

    for (int k=0;k<100;k++)
    {
        if(s1[k]=='\0')
        {
            temp=k;
            break;
        }
    }

    for (int i=0;i<temp;i++ )
    {
        if(s1[i]==s1[temp-i-1])
        {
            x=1;
        }
        else
        {
            x=2;
        }
    }
    if(x==1)
    {
        printf("It is a palindrome");
    }

    else if(x==2)
    {
        printf("it is not a palindrome");
    }
    return 0;
}
