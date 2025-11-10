#include<stdio.h>
void main()
{
    float p,r,n,i;
    printf("enter principal amount,rate and time",p,r,n);
    scanf("%f%f%f",&p,&r,&n);
    i = p*r*n/100;
    printf("the interest is %.2f",i);
}
