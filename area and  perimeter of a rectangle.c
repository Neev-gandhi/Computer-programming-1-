#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter the length of the rectangle\n",a);
    scanf("%d",&a);
    printf("enter the breadth of the rectangle",b);
    scanf("%d",&b);
    c=a*b;
    d=2*(a+b);
    printf("the area of the rectangle is %d\n",c);
    printf("the perimeter of the rectangle is %d\n",d);

}
