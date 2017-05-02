#include <bits/stdc++.h>

using namespace std;
bool used[100010] = {false};

int main()
{
	int n, k;
	cin >> n >> k;
	int last = k + 1;
	for(int i = 1; i < k; ++i)
	{
		if (used[i]) continue;
		used[i] = true;
		cout << i << " ";
		if (used[last - i + 1]) continue;
		used[last - i + 1] = true;
		cout << last - i + 1 << " ";
	}

	for(int i = 1; i <= n; ++i)
	{
		if (!used[i])
			cout << i << " ";
	}
	return 0;
}
