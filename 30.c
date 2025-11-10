#include<stdio.h>
int main()
{
    int temp;
    printf("the prime numbers between 1 and 500 are:\n");
    for (int i=1;i<=500;i++ )
    {
        temp=0;

        for (int j=1;j<i;j++)
        {
            if(i%j!=0)
            {
            temp=1;
            }
        }
        if(temp==1)
            printf("%d\n",i);
    }

    return 0;
}
