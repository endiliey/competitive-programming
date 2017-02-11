#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long half = ((n % 2 == 0) ? (n / 2) : ((n / 2) + 1));
    if (k <= half)
    {
        cout << 1 + (k - 1) * 2;
    }
    else
    {
        cout << 2 * (k - half);
    }
    return 0;
}
