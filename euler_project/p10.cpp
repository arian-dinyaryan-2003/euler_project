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
    long long suma = 0;
    for (int i = 2; i < 2000000; i++)
    {
        if (is_prime(i) == 1)
        {
            suma += i;
        }
    }
    cout << suma;
}