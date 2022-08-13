#include <stdio.h>
void print(int num)
{
    int i = 0, z;
    while (i < num)
    {
        scanf("%d", &z);
        printf("Hello world\n%d\n", z);
        i++;
    }
}
int main()
{
    print(5);
    return 0;
}