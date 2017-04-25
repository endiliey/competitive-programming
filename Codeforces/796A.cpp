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

struct house
{
	int a;
	int d;
	house(int x, int y)
	{
		a = x;
		d = y;
	}
};

bool operator<(house h1, house h2)
{
	return h1.d < h2.d;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	vector<house> houses;
	for(int i = 1, foo; i <= n; ++i)
	{
		cin >> foo;
		int distance = abs(i - m) * 10;
		houses.push_back(house(foo, distance));
	}

	sort(houses.begin(), houses.end());
	for(int i = 0; i < n; ++i)
	{
		if (houses[i].d != 0 && houses[i].a != 0 && houses[i].a <= k)
		{
			cout << houses[i].d << endl;
			return 0;
		}
	}
}
