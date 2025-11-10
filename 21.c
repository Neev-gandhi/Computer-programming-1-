#include<stdio.h>
void main()
{
    int n,x;
    printf("enter a number :");
    scanf("%d",&n);

    printf("the digits are:\n");
     while(n!=0)
    {
        x=n%10;
        printf("%d\n",x);
        n=n/10;
    }





}
