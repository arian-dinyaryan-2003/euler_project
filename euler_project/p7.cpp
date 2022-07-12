#include <iostream>
using namespace std;
int is_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long long i = 3, o = 1;
    while (o != 10001)
    {
        if (is_prime(i) == 1)
        {
            o++;
        }
        i++;
    }
    cout << i - 1;
}