#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m, k;
	unordered_map<int, int> holes;
	cin >> n >> m >> k;
	for(int i = 1; i <= m; ++i)
	{
		int cup;
		cin >> cup;
		holes[cup] = 1;
	}
	
	if (holes[1] == 1)
	{
		cout << "1" << endl;
		return 0;
	}

	int u, v, bone = 1;
	for(int i = 1; i <= k; ++i)
	{
		cin >> u >> v;
		if (u == bone)
		{
			if (holes[v] == 1)
			{
				cout << v << endl;
				return 0;
			}
			else
			{
				bone = v;
			}
		}
		else if (v == bone)
		{
			if (holes[u] == 1)
			{
				cout << u << endl;
				return 0;
			}
			else
			{
				bone = u;
			}
		}
	}
	cout << bone << endl;
	return 0;
}
