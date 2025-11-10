#include<stdio.h>
int main()
{
    int n,search,found=0;
    printf("enter the size of an array:\t");
    scanf("%d",&n);

    int arr1[n];

    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("enter the value you want to search in the array\t");
    scanf("%d",&search);

    for (int i=0;i<n ;i++ )
    {
        if(arr1[i]==search)
        {
            printf("%d is at %d position",search,i+1);
            found=1;
            break;
        }
    }
    if (!found)
    {
        printf("%d is not found in the array.\n", search);
    }

    return 0;
}
