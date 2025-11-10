#include<stdio.h>
void main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    printf("the factors are :\n");
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d\n",i);
    }
}
