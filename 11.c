#include<stdio.h>
int main()
{
    int arr1[10];
    printf("enter the elements of array:\n");
    for (int i=0;i<10;i++ )
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[10];
    printf("the array after shifting  is :\n");
    arr2[9]=0;
    for (int i =0; i<9;i++ )
    {
        arr2[i]=arr1[i+1];

    }
    for (int i=0;i<10;i++ )
    {
        printf("%d\t",arr2[i]);
    }

    return 0;
}
