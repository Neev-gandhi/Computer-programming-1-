#include<stdio.h>
void main()
{
    float n,g,d;
    printf("enter your gross sales\n");
    scanf("%f",&g);

    if(g>20000)
    {
    d=0.15*g;
    n=g-d;
    printf("your net sales is %f\n",n);
    }
    else if(g>10000)
    {
    d=0.1*g;
    n=g-d;
    printf("your net sales is %f\n",n);
    }
    else
    {
    d=0.05*g;
    n=g-d;
    printf("your net salary is %f\n",n);
    }
}
