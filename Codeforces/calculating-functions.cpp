#include <iostream>
#include <math.h>

using std::cin; using std::cout; using std::endl;

long long f(long long n)
{
    long long total = ((2 * pow(-1, n) * n) + (pow(-1, n) - 1))/4;

    return total;
}


int main()
{
    long long x;
    cin >> x;
    cout << f(x);
    return 0;
}
