#include<bits/stdc++.h>
using namespace std;

int v[100000], dp[100000], dpi[100000], n = 0;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(cin >> v[n++]);
    int pos = 0;
    for(int i = 0; i < n; ++i) {
        int c = lower_bound(dp, dp + pos + 1, v[i]) - dp;
        dp[c] = v[i];
        dpi[i] = c;
        pos = max(pos, c);
    }

    vector<int> a;
    for(int i = n; i >= 0; i--) {
        if(dpi[i] == pos) {
            a.push_back(v[i]);
            pos--;
        }
    }

    cout << a.size() << "\n-\n";
    reverse(a.begin(), a.end());
    for(auto no : a) cout << no << "\n";
    return 0;
}
