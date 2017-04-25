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
	int n, m;
	cin >> n >> m;
	int k;
	for (int i = 0; i != m; ++i)
	{
		cin >> k;
		bool fPair = false;
		unordered_set<int> ming;
		unordered_set<int> posg;
		for (int foo, j = 0; j != k; ++j)
		{
			cin >> foo;
			if (foo >= 0)
			{
				if (present(ming, -1 * foo))
				{
					fPair = true;
				}
				posg.insert(foo);
			}
			else
			{
				if (present(posg, abs(foo)))
				{
					fPair = true;
				}
				ming.insert(foo);
			}
		}

		if (!fPair)
		{
			cout << "YES";
			return 0;	
		}
	}
	cout << "NO";
	return 0;
}
