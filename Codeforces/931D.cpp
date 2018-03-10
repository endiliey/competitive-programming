#include<bits/stdc++.h>
using namespace std;
#define N 100100

int dp[N];
vector<int> adj[N];

void dfs(int x, int depth) {
   dp[depth]++; 
   for(auto u : adj[x]) {
       dfs(u, depth + 1);
   }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 2; i <= n; ++i) {
        int foo;
        cin >> foo;
        adj[foo].push_back(i);
    }

    dfs(1, 1);

    int ans = 0;
    for(int i = 1; i <= n; ++i) {
        ans += dp[i] % 2;
    }
    cout << ans;
    return 0;
}
