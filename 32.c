#include<stdio.h>
int main()
{
    int is_prime;
    int i,j,count=0;

    for (i=2;i<500;i++)
    {
    is_prime=1;
    {
        for ( j=2;j<i/2;j++)
        {
            if(i%j==0)
            is_prime=0;
        }
        if(is_prime==1)
        {
            count=count+1;
        }
    }
    }
    printf("Total prime numbers between 1 and 500 = %d\n", count);

    return 0;
}
