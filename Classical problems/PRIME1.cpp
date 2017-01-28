#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bool isPrime(int);

int main()
{
    int t;
    int m,n;
    cin >> t;
    if (t > 10)
    {
        return 0;
    }
    for (int i = 0; i < t; i++)
    {
        cin >> m >> n;
        while (m <= n)
        {
            if (isPrime(m))
            {
                cout << m << endl;
            }
          m++;
        }
      cout << endl;
    }
}

bool isPrime(int x)
{
    if (x <= 1)
        return false;
    if (x == 2)
        return true;
    if (x % 2 == 0)
        return false;
    for (int i = 3; (i*i) <= x; i+= 2)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
