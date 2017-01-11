#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		int n, foo;
		cin >> n;
		int maximum = INT_MIN;
		while(n--)
		{
			cin >> foo;
			maximum = max(maximum, foo);
		}
		cout << "Case " << i + 1 << ": " << maximum << "\n";
	}
	return 0;
}
