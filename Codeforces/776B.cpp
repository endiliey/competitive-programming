#include <bits/stdc++.h>
#define N 100110
#define ll long long
using namespace std;

int main()
{
	ll n;
	cin >> n;
	// sieve method
	ll a[N];
	ll b[N];
	ll i;
	for (i = 2; i <= n + 1; i++)
	{
		a[i] = 1;
		b[i] = 1;
	}

	ll k = 1;

	for (i = 2; i <= n + 1; i++)
	{
		if (a[i])
		{
			for (ll j = i; j * i <= n + 1; j++)
			{
				a[i * j] = 0;
				b[i * j] = b[i] + 1;
				k = max(b[i * j], k);
			}
		}
	}
	// end of sieve
	
	cout << k << endl;
	for (ll cntr = 2; cntr <= n + 1; cntr++)
	{
		cout << b[cntr] << " ";
	}
	return 0;
}
