#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
const int infinity = INT_MAX;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vii a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i].first >> a[i].second;
	}

	int m;
	cin >> m;
	vii b(m);
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i].first >> b[i].second;
	}

	int minR1 = infinity, maxL1 = -infinity;
	int minR2 = infinity, maxL2 = -infinity;

	for (int i = 0; i < n; ++i)
	{
		maxL1 = max(maxL1, a[i].first);
		minR1 = min(minR1, a[i].second);
	}

	for (int i = 0; i < m; ++i)
	{
		maxL2 = max(maxL2, b[i].first);
		minR2 = min(minR2, b[i].second);
	}

	int output = max(maxL2 - minR1, maxL1 - minR2);
	cout << max(output, 0) << "\n";
	return 0;
}
