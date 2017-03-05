#include <bits/stdc++.h>
#define all(c) c.begin(), c.end()

typedef long long ll;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n, h;
	cin >> n >> h;
	ll width = 0;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		if (val > h)
			width+= 2;
		else
			width++;
	}

	cout << width << endl;
}
