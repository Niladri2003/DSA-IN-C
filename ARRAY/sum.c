#include <stdio.h>
int sum(int num)
{
    int i, sum = 0;
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int num;
    printf("=>");
    scanf("%d", &num);
    printf("\n%d", sum(num));
    return 0;
}