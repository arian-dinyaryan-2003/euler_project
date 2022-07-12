#include <iostream>
using namespace std;
int cheack(long long n)
{
    int i = 1;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            i++;
        }
        else
        {
            n = 3 * n + 1;
            i++;
        }
    }
    return i;
}
int main()
{
    int t = 1, v;
    for (int i = 2; i < 1000000; i++)
    {
        if (t < cheack(i))
        {
            t = cheack(i);
            v = i;
        }
    }
    cout << "result : " << v;
}