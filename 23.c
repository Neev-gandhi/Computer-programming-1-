#include<stdio.h>
void main()
{
    int x,sum=0,n;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        sum = sum +x;
        n = n/10;
    }
    printf("the sum of the digits is %d",sum);
}
