#include <iostream>

using std::cout; using std::cin; using std::endl;

bool isPrime(int x)
{
    if (x <= 1)
        return false;
    if (x == 2)
        return true;
    if (x % 2 == 0)
        return false;
    for (int i = 3; i * i <= x; i += 2)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if (n < 12)
        return -1;
    for (int i = 2; i != n; ++i)
    {
        if (!isPrime(i) && !isPrime(n - i))
        {
            cout << i << " " << (n - i);
            break;
        }
    }
    return 0;
}
