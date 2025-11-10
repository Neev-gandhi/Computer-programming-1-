#include<stdio.h>
void main()
{
    float a,p,c,m,t;
    printf("enter marks of physics , chemistry & maths\n");
    scanf("%f%f%f",&p,&c,&m);
    a=(p+c+m)/3;
    t=p+c+m;
    printf("the total of three subjects is %.1f\n",t);
    if(a>=70)
    {
    printf("distinction");
    }
    else if (a>=60)
    {printf("first");
    }
    else if(a>=50)
    {
    printf("second");
    }
    else if (a>=35)
    {
    printf("third class");
    }
    else if (a<35)
    {
    printf("fail");
    }
}
