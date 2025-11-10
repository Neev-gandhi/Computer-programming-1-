#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter the size of array:\t");
    scanf("%d",&n);
    int arr1[n];

    printf("enter the elements of array:\t");
    for (int i=0;i<n ;i++ )
    {
        scanf("%d",&arr1[i]);
    }

    int arr2[n-1];
    printf("the position from which you want to delete an element\n");
    scanf("%d",&pos);

    for (int i=0;i<n-1 ;i++ )
    {
        if(i<pos-1)
        {
            arr2[i]=arr1[i];
        }
        else if(i==pos-1)
        {
            continue;
        }
        else
        {
            arr2[i]=arr1[i+1];
        }
    }
    printf("array after deletion is \n");
    for (int i=0;i<n-1;i++ )
    {
        printf("%d",arr2[i]);
    }

    return 0;
}
