#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n, a, b, c;
	cin >> n >> a >> b >> c;
	ll k = 4 - (n % 4);
	ll ans = 0;

	if (k == 0) 
	{
		ans = 0;
	}
	else if (k == 1)
	{
		ans = min(a, 3 * c);
		ans = min(ans, c + b);
	}
	else if (k == 2)
	{
		ans = min(2 * a, b);
		ans = min(ans, 2 * c);
	}
	else if (k == 3)
	{
		ans = min(c, 3 * a);
		ans = min(ans, a + b);
	}
	cout << ans;
	return 0;
}