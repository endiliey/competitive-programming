#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum = 0;
    for (int val, i = 0; i != 5; ++i)
    {
        cin >> val;
        sum += val;
    }

    if (sum == 0)
    {
        cout << "-1";
    }
    else if (sum % 5 == 0)
    {
        cout << sum / 5;
    }
    else
    {
        cout << "-1";
    }
    return 0;
}
