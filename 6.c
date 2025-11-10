#include<stdio.h>
int main()
{
        int rows,cols;
        printf("enter the no.of rows and columns \n");
        scanf("%d%d",&rows,&cols);
        int x[rows][cols],y[rows][cols],product[rows][cols];
        printf("enter the elements of first array:\n");

        for (int i=0;i<rows;i++)
        {
            for (int j=0;j<cols;j++)
            {
                scanf("%d",&x[i][j]);
            }
        }
        printf("enter the elements of second array;\n");

        for (int i=0;i<rows;i++)
        {
            for (int j=0;j<cols;j++)
            {
                scanf("%d",&y[i][j]);
            }
        }
        printf("the product of two 3*3 matrices is:\n");
        for (int i=0;i<rows;i++)
        {
            for (int j=0;j<cols;j++)
            {
                printf("%d\t",x[i][j]*y[i][j]);
            }
            printf("\n");
        }


    return 0;
}

