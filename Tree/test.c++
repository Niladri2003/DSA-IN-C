#include <iostream>
using namespace std;
void fun1(int n)
{
    if (n == 0)
    {
        return;
    }

    fun1(n - 1);
    cout << "fun" << n << endl;
}
int main()
{
    fun1(3);
    return 0;
}
