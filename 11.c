#include<stdio.h>
int main()
{
    int temp;
    char s1[100],s2[100];
    printf("enter the string:\n");
    gets(s1);

    for (int i=0;i<100 ;i++ )
    {
        if(s1[i]=='\0')
        {
            temp=i;
            break;
        }
    }
        for (int j = temp - 1, i = 0; j >= 0; j--, i++)
        {
        s2[i] = s1[j];
        }
        s2[temp] = '\0';


    for (int i=0;s2[i]!=0 ;i++ )
    {
        printf("%c\n",s2[i]);
    }
    return 0;
}
