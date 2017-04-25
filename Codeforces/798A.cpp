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
	string s;
	cin >> s;
	int c = 0;
	int n = s.size();
	for (int i = 0; i < n / 2; i++)
		if (s[i] != s[n - i - 1])
			c++;

	if (c > 1 || (c == 0 && s.size() % 2 == 0))
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}
