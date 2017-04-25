#include <bits/stdc++.h>
#define ll long long
#define all(c) c.begin(), c.end()
using namespace std;

int main()
{
	ll n;
	int x;
	cin >> n >> x;
	int shell[3] = {0, 1, 2};
	
	n %= 6;
	for (ll i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			swap(shell[1], shell[2]);
		else
			swap(shell[0], shell[1]);
	}
	cout << shell[x] << endl;
	return 0;

}
