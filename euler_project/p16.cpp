#include <iostream>
using namespace std;
long long power(int n, int m)
{
    long long j = 1;
    for (int i = 1; i <= m; i++)
    {
        j *= n;
    }
    return j;
}
long long suma_digit_number(long long n)
{
    int u = 0;
    while (n != 0)
    {
        u += n % 10;
        n /= 10;
    }
    return u;
}
int main()
{
    long long u;
    u = suma_digit_number(power(2, 50));
    cout << "resulr : " << u;
}