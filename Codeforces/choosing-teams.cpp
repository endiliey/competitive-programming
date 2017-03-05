#include <bits/stdc++.h>
#define all(c) c.begin(), c.end()

typedef long long ll;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	vector<int> team;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		team.push_back(val);
	}
	int cnt = 0;	
	for (int i = 0; i < n; i++)
	{
		if (5 - team[i] >= k)
			cnt++;
	}

	int ans = cnt / 3;
	cout << ans << endl;

}
