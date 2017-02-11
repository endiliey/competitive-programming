#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, minimum;
    cin >> t;
    vector<int> S;
    for (int i = 0; i != t; ++i)
    {
        cin >> n;
        for (int val, j = 0; j != n; ++j)
        {
            cin >> val;
            S.push_back(val);
        }

        std::sort(S.begin(), S.end());
        minimum = S[1] - S[0];
        for (int k = 1; k != n - 1; ++k)
        {
            if (S[k + 1] - S[k] < minimum)
                minimum = S[k + 1] - S[k];
        }
        cout << minimum << endl;
        S.clear();
    }
    return 0;
}
