#include<stdio.h>
int main()
{
    int n,add,pos;
    printf("enter the no.of elements in array\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements of array:\n");
    for (int i=0;i<n ;i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position of the value you want to insert \t");
    scanf("%d",&pos);

    printf("enter the value you want to enter");
    scanf("%d",&add);
    int arr1[n+1];

    arr1[pos-1]=add;

    printf("the new array is :\n");

    for (int i=0;i<n+1;i++ )
    {
        if(i<pos-1)
        {
            arr1[i]=arr[i];
        }
        else if(i==pos-1)
        {
            arr1[i]=add;
        }
        else
        {
            arr1[i]=arr[i-1];
        }
    }
    printf("the new array is :\n");
    for (int i=0;i<n+1;i++ )
        printf("%d",arr1[i]);
    {

    }
    return 0;
}
