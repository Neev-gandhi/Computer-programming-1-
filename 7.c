#include<stdio.h>
int main()
{
    int arr[4][4],temp;
    printf("\n Enter the elements of a 4*4 matrix:\n");
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++ )
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n The matrix is :\n");
    for (int i=0; i<4;i++ )
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<4;i++ )
    {
        for(int j=i+1;j<4;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("\n The Transpose of the matrix is :\n");
    for (int i=0; i<4;i++ )
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}
