#include <stdio.h>
void main()
{
    int sum=0;
    printf("sum of Multiple of 13 from 1 to 100 is\n");
    for(int i=13;i<=100;i+=13)
    {
        sum += i;
    }
printf("the sum is %d\n",sum);
}
