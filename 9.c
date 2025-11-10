#include<stdio.h>
int main()
{
    int arr[5],j=0,arr1[5];
    printf("Enter the elements of array:\n");
    for (int i=0; i<5;i++ )
    {
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<5;i++)
    {
        arr1[i]=arr[4-i];
    }
    printf("the reversed array is:\n");
    for (int i=0;i<5;i++ )
    {
        printf("%d",arr1[i]);
    }
    return 0;
}
