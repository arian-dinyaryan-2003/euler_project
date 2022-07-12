#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int prime_number(int n)
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
int is_even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int i = 2, suma = 0, u;
    while (fibo(i) < 4000000)
    {
        u = fibo(i);
        if (is_even(u) == 1)
        {
            suma += u;
        }
        i++;
    }
    cout << "result : " << suma;

    return 0;
}