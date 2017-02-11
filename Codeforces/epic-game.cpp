#include <iostream>
#include <numeric>

using std::cout; using std::cin; using std::endl;

int gcd(int x,int y)
{
    if (y == 0)
    {
        return x;
    }
    return gcd(y, x % y);
}


int main()
{
    int n;
    int a[2];
    cin >> a[0] >> a[1] >> n;
    int turn = 0;
    while (n > 0)
    {
        if (n < gcd(a[turn % 2], n))
        {
            break;
        }
        n -= gcd(a[turn % 2], n);
        turn++;
    }

    cout << (turn + 1) % 2;
    return 0;
}
