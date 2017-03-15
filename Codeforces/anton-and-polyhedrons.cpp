#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	map<string, int> f;
	f["Tetrahedron"] = 4;
	f["Cube"] = 6;
	f["Octahedron"] = 8;
	f["Dodecahedron"] = 12;
	f["Icosahedron"] = 20;
	int total = 0;
	for (int i = 0; i != n; i++)
	{
		string a;
		cin >> a;
		total += f[a];
	}
	cout << total;
	return 0;
}
