#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int i = 1;
	k = 240 - k;
	while (i <= n && k >= 5 * i)
	{
		k -= i * 5;
		i++;		
	}
	cout << i - 1;
	return 0;
}
