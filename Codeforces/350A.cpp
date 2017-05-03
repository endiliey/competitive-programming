#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> p;
	vector<int> f;
	for(int i = 0; i < n; ++i)
	{
		int foo;
		cin >> foo;
		p.push_back(foo);
	}
	for(int i = 0; i < m; ++i)
	{
		int foo;
		cin >> foo;
		f.push_back(foo);
	}

	int minp = *min_element(p.begin(), p.end());
	int maxp = *max_element(p.begin(), p.end());
	int minf = *min_element(f.begin(), f.end());
	
	int v = max(2 * minp, maxp);
	if (v < minf)
	{
		cout << v;
	}
	else
	{
		cout << -1;
	}
	return 0;
}