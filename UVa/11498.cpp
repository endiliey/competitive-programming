#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int k;
	while(cin >> k)
	{
		if (k == 0)
			break;
		int n, m, x, y;
		cin >> n >> m;
		for (int i = 0; i < k; ++i)
		{
			cin >> x >> y;
			if (x == n || y == m)
				cout << "divisa";
			else if (x < n && y < m)
				cout << "SO";
			else if (x < n && y > m)
				cout << "NO";	
			else if (x > n && y > m)
				cout << "NE";
			else if (x > n && y < m)
				cout << "SE";
			cout << "\n";
		}
	}
	return 0;
}
