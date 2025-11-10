#include<stdio.h>
int main()
{
    int original,n;

    printf("enter a number\n");
    scanf("%d",&n);
    original=n;
        n=n%10;
        if(n==original)
        {
            printf("It Is a Automorphic Number\n");
        }
    return 0;
}
