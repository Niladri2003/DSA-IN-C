// Write a program in C or C++ to sort a given array using insertion sort algorithm.
// Show the number of comparison required for a given input.
#include <stdio.h>

void iSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{

    int arr[] = {50, 20, 40, 60, 10, 30};

    int n = sizeof(arr) / sizeof(arr[0]);
    iSort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}