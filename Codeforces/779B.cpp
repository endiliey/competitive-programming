#include <bits/stdc++.h>
#define all(c) c.begin(), c.end()
using namespace std;

typedef long long ll;

int main()
{
	string n;
	int k, z = 0, nz = 0;
	cin >> n >> k;
	for (int i = n.size() - 1; i >= 0; i--)
	{
		if (n[i] == '0')
			z++;
		else
			nz++;

		if (z >= k)
		{
			cout << nz << endl;
			return 0;
		}
	}

	cout << n.size() - 1 << endl;
	return 0;
}
