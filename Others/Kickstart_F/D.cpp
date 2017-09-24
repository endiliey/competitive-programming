#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define PB push_back 
#define MP make_pair
#define F first
#define S second
#define all(c) (c).begin(),(c).end() 
#define REP(i,a,b) for (int i = a; i < b; ++i)
#define REP2(i,a,b) for (int i = a; i <= b; ++i)
#define tr(c,i) for(decltype((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fill(a, v) memset(a, v, sizeof a)
typedef long long ll;

int solve(int n)
{
	vi dp(n + 1, 0);

	// base case
	dp[0] = 0, dp[1] = 1, dp[2] = 2, dp[3] = 3;

	// build the dp table
	for (int i = 4; i <= n; ++i)
	{
		dp[i] = i;

		// Recursively find min
		for (int x = 1; x <= i; x++)
		{
			int x2 = x * x;
			if (x2 > i)
				break;
			else
			{
				dp[i] = min(dp[i], 1 + dp[i - x2]);	
			}
		}
	}
	return dp[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int T;
	cin >> T;

	for(int i = 1; i <= T; ++i)
	{
		int N;
		cin >> N;
		cout << "Case #" << i << ": " << solve(N) << "\n";
	}
    return 0;
}
