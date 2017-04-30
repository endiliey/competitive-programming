#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> x;
    vector<int> ans[100010];
    for (int i = 0; i < n; ++i)
    {
        int foo;
        cin >> foo;
        x.push_back({foo, i});
    }

    sort(x.begin(), x.end());
    int mx, mn; 
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
            mn = abs(x[i + 1].first - x[i].first);
        else if (i == n - 1)
            mn = abs(x[i].first - x[i - 1].first);
        else
            mn = min(abs(x[i].first - x[i - 1].first), abs(x[i + 1].first - x[i].first));

        if (i == 0)
            mx = abs(x[n - 1].first - x[i].first);
        else if (i == n - 1)
            mx = abs(x[i].first - x[0].first);
        else
            mx = max(abs(x[i].first - x[0].first), abs(x[n - 1].first - x[i].first));

        ans[x[i].second].push_back(mn);
        ans[x[i].second].push_back(mx);
    }

    for(int i = 0; i < n; ++i)
    {
        cout << ans[i][0] << " " << ans[i][1] << "\n";
    }
    
    return 0;
}
