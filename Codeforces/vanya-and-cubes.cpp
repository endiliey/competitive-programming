#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int height = 0;
    for (int i = 1; n > 0; ++i)
    {
        n -= ((i + 1) * i / 2);
        if (n < 0)
            break;
        height++;
    }
    cout << height;
    return 0;
}
