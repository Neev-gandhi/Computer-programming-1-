#include<stdio.h>
void main()
{
    float p,c,m,a,t;
    printf("enter marks of physics\n");
    scanf("%f",&p);
    printf("enter marks in chemistry\n");
    scanf("%f",&c);
    printf("enter marks in maths\n");
    scanf("%f",&m);
    a=(p+c+m)/3;
    t=p+c+m;
    printf("the average of three subjects is %f\n",a);
    printf("the total of three subjects is %f\n",t);
}
