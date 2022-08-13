#include <stdio.h>
int F(int n)
{
    int k;
    if (n == 0)
        return 0;
    else
        printf("%d\n", n);
    return F(n - 1);
}
int main()
{
    int n = 10;
    F(n);
}