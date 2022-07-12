#include <iostream>
using namespace std;
int checka(int a, int b, int c)
{

    if (c * c == (a * a) + (b * b))
    {
        return 1;
    }
    return 0;
}

int main()
{
    for (int i = 1; i < 1000; i++)
    {
        for (int j = 1; j < 1000; j++)
        {
            for (int y = 1; y < 1000; y++)
            {
                if (i + j + y == 1000)
                {
                    if (checka(i, j, y) == 1)
                    {
                        cout << i << "," << j << "," << y << " , " << i * j * y;
                        return 0;
                    }
                }
            }
        }
    }
}