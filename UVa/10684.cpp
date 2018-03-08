#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    while(cin >> N, N != 0) {
        int v[10002], dp[10002];
        for(int i = 0; i < N; ++i) {
            cin >> v[i];
        }
        int ans = dp[0] = v[0];
        for(int i = 1; i < N; ++i) {
           dp[i] = max(v[i], v[i] + dp[i - 1]);
           ans = max(ans, dp[i]);
        }
        if (ans <= 0) cout << "Losing streak.\n";
        else cout << "The maximum winning streak is " << ans << ".\n";

    }
    return 0;
}
