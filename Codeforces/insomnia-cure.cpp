#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int sadDragon = 0;

    while (d > 0)
    {
        if (d % k == 0 || d % l == 0 || d % m == 0 || d % n == 0)
        {
            sadDragon++;
        }
        d--;
    }

    cout << sadDragon;
    return 0;
}
