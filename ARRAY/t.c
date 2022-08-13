#include <stdio.h>
int main()
{
    int m, n, i, j, l, k = 0, a1[30], a2[10], temp;
    printf("Enter the size of 1st array; \n");
    scanf("%d", &m);
    printf("Enter the size of 2nd array; \n");
    scanf("%d", &n);
    if (n <= 10 && m <= 10)
    {
        printf("Enter the element of 1st array; \n");
        for (i = 1; i <= m; i++)
            scanf("%d", &a1[i]);
        printf("Enter the element of 2nd array; \n");
        for (j = 1; j <= n; j++)
            scanf("%d", &a2[i]);
        int s = m + n;
        for (i = m + 1; i <= s; i++)
        {
            a1[i] = a2[k];
            for (j = 1; j <= s; j++)
            {
                if (a1[j] >= a1[i])
                {
                    temp = a1[i];
                    a1[j] = a1[i];
                    a1[i] = temp;
                }
            }
            k = k + 1;
        }

        printf("The result array is:\n");
        for (i = 1; i <= s; i++)
            printf("%d\t", a1[i]);
    }
    else
    {
        printf("array size valid only for 10 elements");
    }
    return 0;
}