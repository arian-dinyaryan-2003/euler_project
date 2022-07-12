#include <iostream>
using namespace std;

int main()
{
    long long u = 600851475143, i = 3;
    while (u != 1)
    {
        if (u % i == 0)
        {
            u /= i;
        }
        i++;
    }
    cout << "result : " << i - 1;

    return 0;
}