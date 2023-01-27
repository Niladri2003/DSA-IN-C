#include <stdio.h>

void merge(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            printf(" %d ", a[i++]);
        else
            printf(" %d ", b[j++]);
    }
    while (i < m)
    {
        printf(" %d ", a[i++]);
    }
    while (j < n)
    {
        printf(" %d ", b[j++]);
    }
}

int main()
{
    int a[] = {10, 15, 20, 40};
    int b[] = {5, 6, 7, 8};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    merge(a, b, n, m);

    return 0;
}