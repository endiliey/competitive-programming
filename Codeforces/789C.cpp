#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(decltype((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, prev = 0;
	cin >> n >> prev;
	vi a(n + 1);
	ll sumev = 0, sumodd = 0;
	ll best = 0;
	for (int foo, i = 1; i < n; ++i)
	{
		cin >> foo;
		a[i] = abs(foo - prev);
		prev = foo;
	}

	for (int i = 1; i < n; ++i)
	{
		if (i & 1) // odd
		{
			sumev += a[i];
			sumodd -= a[i];
		}
		else
		{
			sumev -= a[i];
			sumodd += a[i];
		}

		sumev = max(sumev, 0ll);
		sumodd = max(sumodd, 0ll);
		best = max(best, sumev);
		best = max(best, sumodd);
	}
	cout << best;
	return 0;
}
