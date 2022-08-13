#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
        printf("SOrry");
    for (i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", ptr + i);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}