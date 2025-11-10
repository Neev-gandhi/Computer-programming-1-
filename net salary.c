#include<stdio.h>
void main()
{
    float n,g,a,d;
    printf("enter your gross salary\n");
    scanf("%f",&g);

    if(g>10000)
    {
    a=0.1*g;
    d=0.03*g;
    n=a+g-d;
    printf("your net salay is %f\n",n);
    }
    else if(g>5000)
    {
    a=0.07*g;
    d=0.028*g;
    n=a+g-d;
    printf("your net salay is %f\n",n);
    }
}
