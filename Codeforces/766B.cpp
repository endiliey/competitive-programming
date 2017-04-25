#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int foo;
	vector<int> seg;
	for (int i = 0; i < n; i++)
	{
		cin >> foo;
		seg.push_back(foo);
	}
	
	sort(seg.begin(), seg.end());
	for (int i = 0; i < n - 2; i++)
	{
		if (seg[i] + seg[i + 1] > seg[i + 2])
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;	
}
