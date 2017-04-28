#include <bits/stdc++.h>

using namespace std;

int main () 
{
	int n;
	cin >> n;
	vector<int> h(n + 1, 0);
	for (int i = 1; i <= n; ++i) 
	{
		cin >> h[i];
	}
	int energy = 0;
	int pay = 0;
	for (int i = 0; i < n; ++i) 
	{
		energy += (h[i] - h[i + 1]);
		if (energy < 0) 
		{
			pay += abs(energy);
			energy = 0;
		}
	}
	cout << pay;
	return 0;
}