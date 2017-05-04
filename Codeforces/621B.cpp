#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	map<int, int> xsuby;
	map<int, int> xaddy;
	int n;
	cin >> n;
	ll atk = 0;
	for(int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		atk += xsuby[x - y]++; // if x1 - y1 == x2 - y2
		atk += xaddy[x + y]++; // if x1 + y1 == x2 + y2
	}
	cout << atk;
	return 0;
}