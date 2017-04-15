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
	unordered_map<char, int> hash;
	hash['q'] = 9;
	hash['r'] = 5;
	hash['b'] = 3;
	hash['n'] = 3;
	hash['p'] = 1;
	hash['k'] = 0;
	
	int p1 = 0;
	int p2 = 0;
	for(int i = 0; i < 8; ++i)
	{
		for(int j = 0; j < 8; ++j)
		{
			char foo;
			cin >> foo;
			if (islower(foo))
			{
				p2 += hash[tolower(foo)];
			}
			else
			{
				p1 += hash[tolower(foo)];
			}

		}
	}
	if (p1 > p2)
		cout << "White" << endl;
	else if (p1 == p2)
		cout << "Draw" << endl;
	else
		cout << "Black" << endl;

	return 0;
}
