#include <bits/stdc++.h>
#define all(c) c.begin(), c.end()
#define epsilon 1e-7
#define N 60010

typedef long long ll;

using namespace std;

ll x[N];
ll v[N];

bool check(double t, int n)
{
	double top = -1e9;
	double bot = 1e9;
	for (int i = 0; i < n; i++)
	{
		top = max(top, x[i] - v[i] * t);
		bot = min(bot, x[i] + v[i] * t);	
	}
	return top >= bot;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int foo;
		cin >> foo;	
		x[i] = foo;
	}	
	for (int i = 0; i < n; i++)
	{
		int bar;
		cin >> bar;
		v[i] = bar;
	}
	double low, hi;
	for (low = 0, hi = 1e9; hi - low > epsilon;)
	{
		double mid = low + (hi - low) / 2;
		if (check(mid, n))
			low = mid;
		else
			hi = mid;
	}
	printf("%.7f", (low + hi) / 2);
}
