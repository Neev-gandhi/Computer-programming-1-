#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three values\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
    printf("%d is largest of three numbers",a);
    }
    else if ((b>a)&&(b>c))
    {
    printf("%d is largst of three numbers",b);
    }
    else
    {
    printf("%d is the largest of three numbers",c);
    }
    }
