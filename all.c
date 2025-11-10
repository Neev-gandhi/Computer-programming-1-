#include<stdio.h>
void main ()
{
float a,b,c,d,e,f;
printf("enter two numbers");
scanf("%f%f", &a ,&b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
printf( "%f + %f = %f \n", a , b ,c);
printf( "%f - %f = %f \n", a , b ,d);
printf( "%f * %f = %f \n", a , b ,e);
printf( "%f / %f = %f \n", a , b ,f);
}
