#include <iostream>
using namespace std;
int check(int n)
{
    for (int i = 2; i <= 20; i++)
    {
        if (n % i != 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int m = 2551;
    while (true)
    {
        if (check(m) == 1)
        {
            cout << "result : " << m;
            return 0;
        }
        m++;
    }
}