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
	int n;
	cin >> n;
	vector<string> s;
	for (int i = 0; i < n; ++i)
	{
		string input;
		cin >> input;
		s.push_back(input);
	}
	int minAns = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		int count = 0;
		for (int j = 0; j < n; ++j)
		{
			if (i == j)
				continue;
			string target = s[j] + s[j];
			if (target.find(s[i]) == string::npos)
			{
				cout << "-1";
				return 0;
			}
			count += target.find(s[i]);
		}
		minAns = min(minAns, count);
	}
	cout << minAns << endl;
	return 0;
}
