#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cups = 0;
    int medals = 0;
    int foo = 0;
    for (int i = 0; i < 3; ++i)
    {
        cin >> foo;
        cups += foo;
    }

    for (int i = 0; i < 3; ++i)
    {
        cin >> foo;
        medals += foo;
    }

    int n;
    cin >> n;
    n -= cups / 5;
    if (cups % 5 > 0)
        n--;
    n -= medals / 10;
    if (medals % 10 > 0)
        n--;

    if (n < 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
