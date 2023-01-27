#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int arr[], int size)
{
    int i, j, min_index;

    for (i = 0; i < size - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < size; j++)
            if (arr[j] < arr[min_index])
                min_index = j;
        if (min_index != i)
        {
            swap(&arr[min_index], &arr[i]);
        }
    }
    for (i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
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
    selectionsort(arr, size);

    return 0;
}