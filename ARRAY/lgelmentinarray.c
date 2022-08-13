#include <stdio.h>
int largest(int arr[], int n)
{
    int lg = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[lg])
            lg = i;
    }
    return lg;
}
int main()
{
    int n, lg;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 1; i < n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    lg = largest(arr, n);
    printf("=>%d", arr[lg]);
}