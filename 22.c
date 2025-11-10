#include<stdio.h>
void main()
{
    int n,count =0;
    printf("enter a number \n");
    scanf("%d",&n);
    if(n==0)
        printf("the no.of digits is 1");
    else
{
        while(n!=0)
    {
        n=n/10;
        count=count+1;
    }
}
printf("the no.of digits are %d",count);

}
