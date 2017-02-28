#include <bits/stdc++.h>
#define all(c) c.begin(), c.end()
using namespace std;

typedef long long ll;

struct p
{
	int a, b;
};

bool operator< (const p &x, p &y)
{
	return (x.a - x.b) < (y.a - y.b);
}

int main()
{
	int n, k;
	cin >> n >> k;
	vector<p> v;
	vector<int> a, b;	
	int val;
	for (int i = 0; i != n; ++i)
	{
		cin >> val;
		a.push_back(val);
	}
	for (int i = 0; i != n; ++i)
	{
		cin >> val;
		b.push_back(val);
	}
	for (int i = 0; i !=n; ++i)
	{
		v.push_back({a[i], b[i]});
	}
	sort(all(v));
	int total = 0;
	for (int i = 0; i !=n; ++i)
	{
		if (i < k)
			total += v[i].a;
		else
			total += min(v[i].a, v[i].b);
	}

	cout << total << endl;
	return 0;
}
