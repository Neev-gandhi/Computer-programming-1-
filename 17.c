#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of an array:\t");
    scanf("%d",&n);

    int arr1[n];

    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[n-1];

    for (int i=0;i<n-1;i++ )
    {
        arr2[i]=arr1[i];
    }

    printf("The array after deleting last element is :\n");
    for (int i=0;i<n-1;i++ )
    {
        printf("%d\n",arr2[i]);
    }
    return 0;
}
