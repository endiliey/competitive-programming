#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int n;
	cin >> n;
	vector<int> a(n, 0);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
 
	int ans = INT_MAX;
	for (int i = 1; i < n - 1; ++i)
	{
		int d = 0;
		for (int j = 0; j < n - 1; ++j)
		{
			if (j + 1 == i) {
				d = max(d, a[j + 2] - a[j]);
				j++;
			}
			else {
				d = max(d, a[j + 1] - a[j]);
			}
		}
		ans = min(ans, d);
	}
	cout << ans;
	return 0;
}