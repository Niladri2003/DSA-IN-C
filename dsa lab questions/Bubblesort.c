#include <stdio.h>

void bubblesort(int arr[], int size)
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
    }

    for (i = 0; i < size; i++)
        printf(" %d ", arr[i]);
}

int main()
{
    int size;
    printf("Enter the size of the array");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, size);

    return 0;
}