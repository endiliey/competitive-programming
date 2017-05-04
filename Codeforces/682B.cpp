#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n, 0);
	for(int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int current = 1;
	for(int i = 0; i < n; ++i)
	{
		if (v[i] >= current)
		{
			++current;
		}
	}
	cout << current;
	return 0;
}