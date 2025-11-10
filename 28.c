#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for (int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is a perfect number\n",n);
    }
    else
    {
        printf("%d is not a perfect number\n",n);

    }
}
