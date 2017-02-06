#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, a, b, spent = 0;
    cin >> n >> m >> a >> b;
    while ( n > 0)
    {
        if (n - m >= 0)
        {
            if (min(m * a, b) == b)
            {
                n -= m;
                spent += b;
            }
            else
            {
                n--;
                spent += a;
            }

        }
        else if ( n - m < 0)
        {
            if (min(n * a, b) == b)
            {
                n -= m;
                spent += b;
            }
            else
            {
                spent += (n * a);
                n = 0;
            }
        }
    }
    cout << spent;
    return 0;
}
