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
		int N;
		cin >> N;
		vi a;
		for(int j = 0; j < N; j++)
		{
			int foo;
			cin >> foo;
			a.push_back(foo);
		}

		int biggest = N, smallest = 1;
		int p = (N - 1) / 2;
		int dir = 0, sign = (N % 2 == 0) ? -1 : 1;
		string ans = "YES";
		while(p >= 0 && p < N)
		{
			int w = a[p];
			if (w == biggest || w == smallest)
			{
				if (w == biggest)
				{
					biggest--;
				}
				else if (w == smallest)
				{
					smallest++;
				}
				dir += 1;
				sign *= -1;
				p = p + (dir * sign);
			}
			else
			{
				ans = "NO";
				break;
			}
		}
		cout << "Case #" << i << ": " << ans << "\n";
	}
    return 0;
}
