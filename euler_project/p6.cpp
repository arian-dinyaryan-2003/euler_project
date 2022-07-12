#include <iostream>
using namespace std;
int main()
{
    int m = 0, n = 0;
    for (int i = 1; i <= 100; i++)
    {
        m += i;
    }
    for (int i = 1; i <= 100; i++)
    {
        n += i * i;
    }
    cout << "result : " << m * m - n;
}