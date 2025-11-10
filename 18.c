#include <stdio.h>

int main()
{
    int n, del, pos = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n - 1];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the value you want to delete: ");
    scanf("%d", &del);

    // Find the position of the element to delete
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == del)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        printf("There is no such value in the array.\n");
    }
    else
    {
        // Copy elements except the deleted one
        for (int i = 0, j = 0; i < n; i++)
        {
            if (i != pos)
            {
                arr2[j++] = arr1[i];
            }
        }

        printf("Array after deletion:\n");
        for (int i = 0; i < n - 1; i++)
        {
            printf("%d ", arr2[i]);
        }
        printf("\n");
    }

    return 0;
}
