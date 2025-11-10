#include<stdio.h>
void main()
{
    int num,digit,original,reverse=0;
    printf("enter number\n");
    scanf("%d",&num);
    original=num;
    while(num>0)
    {
            digit=num%10;
            reverse = reverse*10 + digit;
            num=num/10;

    }
    if(reverse==original)
    {

        printf("%d is palindrome\n",original);

    }
    else
        {
            printf("%d is not palindorme\n",original);
        }
}
