#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n, m;
	cin >> n >> m;
	int a, b;
	int nosleep = 0;
	for(int i = 0; i < n * m; ++i) 
	{
		cin >> a >> b;
		if (a || b) 
		{
			++nosleep;
		}
	}
	cout << nosleep << "\n";
	return 0;
}