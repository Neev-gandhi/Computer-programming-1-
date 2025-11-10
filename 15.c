#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:\t");
    scanf("%d",&n);
    int arr1[n];

    printf("enter the elements of array:\t");
    for (int i=0;i<n ;i++ )
    {
        scanf("%d",&arr1[i]);
    }

    int arr2[n-1];
    for (int i=0;i<n-1 ;i++ )
    {
        arr2[i]=arr1[i+1];
    }
    printf("the array after deletion is\n");
     for (int i=0;i<n-1 ;i++ )
    {
        printf("%d\n",arr2[i]);
    }

    return 0;
}
