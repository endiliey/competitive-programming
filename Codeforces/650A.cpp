#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	map<int, int> xs;
	map<int, int> ys;
	map<pair<int, int>, int> zs;
	long long ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		ans += (xs[x]++); // only if count is more than 1 will be added
		ans += (ys[y]++); 
		ans -= (zs[make_pair(x, y)]++); // decrease the one that we counted twice
	}
	cout << ans;
	return 0;
}