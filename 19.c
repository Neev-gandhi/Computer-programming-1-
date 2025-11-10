#include<stdio.h>
void main()
{
    printf("the numbers divisible by 5 are:\n");

    for (int i=1;i<=100;i++)
    {
        if(i%5==0)
        {
            printf("%d\n",i);
        }
    }
}
