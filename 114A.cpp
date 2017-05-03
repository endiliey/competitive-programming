#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll k, l;
	cin >> k >> l;
	int div = 0;
	while(l > 1 && l % k == 0)
	{
		l /= k;
		div++;
	}
	if (l == 1)
	{
		cout << "YES\n" << div - 1;
	}
	else
		cout << "NO";
	return 0;
}