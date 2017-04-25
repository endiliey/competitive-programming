#include <bits/stdc++.h>
#define all(c) c.begin(), c.end()

typedef long long ll;

using namespace std;

int main()
{
	ll n;
	cin >> n;
	ll off = floor(n / 7) * 2;
	ll maximum = off;
	ll minimum = off;
	ll modulus = n % 7;
	if (modulus == 1)
	{
		maximum += 1;
	}
	else if (modulus >= 2)
	{
		maximum += 2;
	}

	if (modulus == 6)
		minimum += 1;

	cout << minimum << " " << maximum;
	return 0;
}
