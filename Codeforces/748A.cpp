#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	int r = (k - 1) / (2 * m) + 1;
	int d = ((k - 1) / 2) % m + 1;
	string dir = (k % 2 == 1) ? "L" : "R";
	cout << r << " " << d << " " << dir;
	return 0;
}

