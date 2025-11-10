#include<stdio.h>
void main()
{
int i,n;
    printf("enter the number whose factorial you want\n");
    scanf("%d",&n);
    int fact=1;
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    printf("the %d factorial is %d",n,fact);
    }
