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
const int infinity = 150150;
vvi W;
bool V[infinity];

void dfs(int start, int &vertices, int &edges)
{
	stack<int> s;
	s.push(start);
	while (!s.empty())
	{
		int curr = s.top();
		s.pop();

		if (!V[curr])
		{
			V[curr] = true;
			++vertices;
			edges += sz(W[curr]);
			for (auto adj : W[curr])
			{
				s.push(adj);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	W = vvi(n + 1);
	int a, b;
	for (int i = 0; i != m; ++i)
	{
		cin >> a >> b;
		W[a].pb(b);
		W[b].pb(a);
	}

	for (int i = 1; i <= n; ++i)
	{
		if (!V[i])
		{
			int vertices = 0, edges = 0;
			dfs(i, vertices, edges);
			if (edges != (ll) vertices * (vertices - 1))
			{
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
	return 0;
}

