#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	ll n, x;
	cin >> n >> x;
	ll counter = 0;
	for (ll i = 1; i <= n; ++i)
	{
		if (x <= i * n && x % i == 0)
			counter++;
	}

	cout << counter;
	return 0;
}
