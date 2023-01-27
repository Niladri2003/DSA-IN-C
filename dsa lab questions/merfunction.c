#include <stdio.h>
void merge(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1, n2 = h - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = arr[i + 1];
    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[m + 1 + j];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];
}

int main()
{
    int a[] = {10, 15, 20, 50, 2, 3, 4, 5};
    int l = 0, m = 3, h = 7;
    merge(a, l, m, h);
    for (int i = 0; i < h; i++)
    {
        printf(" %d ", a[i]);
    }

    return 0;
}