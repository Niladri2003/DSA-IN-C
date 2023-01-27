#include <stdio.h>

int binarysearch(int arr[], int size, int key)
{
    int low = 0, mid, high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {

            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int ans, i, size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements in acendeing form:");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    int key;
    printf("Enter the element you want to find in that array");
    scanf("%d", &key);
    ans = binarysearch(arr, size, key);
    if (ans == -1)
    {
        printf("Not found in the given array");
    }
    else
        printf("Element found at index %d ", ans);

    return 0;
}