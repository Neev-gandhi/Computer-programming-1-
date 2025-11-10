#include<stdio.h>
int main()
{
    int j=2, n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<=1)
        j=1;
    for (int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            j=1;
            break;
        }
        else
        {
            j=2;
        }
    }
    if(j==1)printf("it is not a prime number");
    if(j==2)printf("it is a prime number");
    return 0;
}
