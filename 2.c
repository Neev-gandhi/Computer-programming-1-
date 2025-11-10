#include<stdio.h>
int main()
{
    int arr[10];
    printf("enter the elements of the array\n");
    for (int i=0;i<10;i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("the value at 4th, 7th and 9th value is %d, %d and %d\n",arr[3],arr[6],arr[8]);

    return 0;
}
