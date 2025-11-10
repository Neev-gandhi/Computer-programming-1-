#include <stdio.h>

int main()
{
    int arr1[5], arr2[10];
    int i, j = 0;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 5; i++)
    {
        arr2[j] = arr1[i];
        j += 2;
    }

    printf("\nElements in arr2 (after copying with skipping):\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
