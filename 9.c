#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("enter n even numbers you want the sum of\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+(i*2);
}
printf("%d\n",sum);
}
