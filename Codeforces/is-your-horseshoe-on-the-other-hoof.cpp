#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0;
    std::unordered_set<int> colors;
    for (int val, i = 0; i < 4; ++i)
    {
        cin >> val;
        if (colors.find(val) == colors.end())
        {
            colors.insert(val);
            cnt++;
        }
    }

    cout << 4 - cnt;
    return 0;
}
