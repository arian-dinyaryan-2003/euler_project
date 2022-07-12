#include <iostream>
using namespace std;
int check(int n, int a[100])
{
    int i = 0, j = 0;
    while (n != 0)
    {
        a[i] = n % 10;
        n /= 10;
        i++;
    }
    while (j <= i)
    {
        if (i == j)
        {
            return 1;
        }
        else if (a[i] != a[j])
        {
            return 0;
        }
        i--;
        j++;
    }
    return 1;
}
int main()
{
    int a[100];
}