#include<stdio.h>
int main()
{
    int n,add;
    printf("enter the size of array:\t");
    scanf("%d",&n);
    int arr1[n];

    printf("enter the elements of array:\t");
    for (int i=0;i<n ;i++ )
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[n+1];
    printf("enter the value you enter at last position of array\t");
    scanf("%d",&add);

    arr2[n]=add;
    for (int i=0;i<n;i++ )
    {
        arr2[i]=arr1[i];
    }
    printf("the array after addition of %d is :\n",add);

    for (int i=0;i<n+1 ;i++ )
    {
        printf("%d\n",arr2[i]);
    }
    return 0;
}
