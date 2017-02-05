#include <iostream>

typedef long long ll;
using std::cout; using std::cin; using std::endl;

int main()
{
    ll a, b, c;
    cin >> a >> b;

    c = a - b;
    if (c % 10 == 9)
    {
        c -= 1;
    }
    else
    {
        c += 1;
    }
    cout <<  c;
    return 0;
}
