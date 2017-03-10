#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	ll n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i != n; i++)
	{
		cin >> a[i];
	}

	int i = 1;
	while (k - i > 0)
	{
		k -= i;
		i++;
	}	
	cout << a[k - 1];
	return 0;
}
