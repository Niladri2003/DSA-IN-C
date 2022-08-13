#include <stdio.h>
int main()
{
    int m, n, i, j, l, k, a1[10], a2[10], a3[20];
    printf("Enter the size of 1st array; \n");
    scanf("%d", &m);
    printf("Enter the element of 1st array; \n");
    for (i = 0; i < m; i++)
        scanf("%d", &a1[i]);
    printf("Enter the size of 2nd array; \n");
    scanf("%d", &n);
    printf("Enter the element of 2nd array; \n");
    for (j = 0; j < n; j++)
        scanf("%d", &a2[i]);
    i = 0;
    j = 0;
    k = 0;
    while ((i < m) && (j < n))
    {
        if (a1[i] < a2[j])
        {
            a3[++k] = a1[++i];
        }
        else
        {
            a3[++k] = a2[++j];
        }

        // while(i<m){
        //     a3[++k]=a1[++i];
        // }
        // while(j<n){
        //     a3[++k]=a2[++j];
        // }
    }

    printf("The result array is:\n");
    for (i = 0; i < k; i++)
        printf("%d\t", a3[i]);
    return 0;
}