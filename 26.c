#include<stdio.h>
void main()
{
    int sum =0,n,remainder;
    printf("enter a number");
    scanf("%d",&n);
    int original=n;
    while(n!=0)
    {
        remainder=n%10;
        sum = sum + remainder*remainder*remainder;
        n=n/10;
    }
    if(sum==original)
    {
        printf("%d is a armstrong number",original);
    }
    else
    {
        printf("%d is not a armstrong number",original);
    }




}
