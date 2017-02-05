#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m, sum = 0;
    bool possible = false;
    vector<int> money;
    cin >> t;
    for (int i = 0; i != t; ++i)
    {
        cin >> n >> m;
        for (int val, j = 0; j != n; ++j)
        {
            cin >> val;
            money.push_back(val);
        }

        for (int k = 1; k < pow(2, n); ++k)
        {
            sum = 0;
            for (int x = 0; x < n; ++x)
            {
                //cout << "Turn " << x << endl;
                if ((k & (1 << x)) != 0) // if xth bit of k is set
                {
                    sum += money[x];
                    //cout << "Sum is: " << sum << endl;
                }
            }

            if (sum == m)
            {
                possible = true;
                break;
            }
        }
        if (possible)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        money.clear();
        possible = false;
    }
    return 0;
}
