#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define PB push_back 
#define MP make_pair
#define F first
#define S second
#define all(c) (c).begin(),(c).end() 
#define REP(i,a,b) for (int i = a; i < b; ++i)
#define REP2(i,a,b) for (int i = a; i <= b; ++i)
#define tr(c,i) for(decltype((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fill(a, v) memset(a, v, sizeof a)
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int T;
	cin >> T;
	for(int i = 1; i <= T; ++i)
	{
		int ans = 0, E, N, H = 0;
		deque<int> dq;
		cin >> E >> N;
		for (int j = 0; j < N; ++j)
		{
			int foo;
			cin >> foo;
			dq.push_back(foo);
		}
		sort(dq.begin(), dq.end());
		while(!dq.empty())
		{
			if (E > dq.front())
			{
				H++;
				E -= dq.front();
				dq.pop_front();
			}
			else
			{
				if (H > 0 && dq.size() >= 2)
				{
					H--;
					E += dq.back();
					dq.pop_back();
				}
				else
				{
					break;
				}
			}
		}
		cout << "Case #" << i << ": " << H << "\n";
	}
    return 0;
}
