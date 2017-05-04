#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> board(n, "");
	for(int i = 0; i < n; ++i)
	{
		cin >> board[i];
	}
	int ans = 0;
	for(int i = 0; i < n; ++i)
	{
		int count = 0;
		for(int j = 0; j < n; ++j)
		{
			if (board[j] == board[i])
				count++;
		}
		ans = max(ans, count);
	}
	cout << ans;
	return 0;
}