#include<stdio.h>
int main()
{
    int n,add;
    printf("enter the no.of elements in array\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements of array:\n");
    for (int i=0;i<n ;i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the value you want to insert at the beginning\t");
    scanf("%d",&add);
    int arr1[n+1];
    arr1[0]=add;
    printf("the array after inserting %d is:\n",add);
    printf("%d\n",arr1[0]);
    for (int i=1;i<n+1;i++ )
    {
        arr1[i]=arr[i-1];
        printf("%d\n",arr1[i]);
    }
    return 0;
}
