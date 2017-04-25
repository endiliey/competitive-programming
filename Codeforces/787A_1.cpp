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
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int suma = b, sumb = d;
	set<int> pos1;
	set<int> pos2;
	while(suma <= 2e5)
	{
		pos1.insert(suma);
		suma += a;
	}
	while(sumb <= 2e5)
	{
		pos2.insert(sumb);
		sumb += c;
	}
	
	for (auto &c : pos1)
	{
		if (present(pos2, c))
		{
			cout << c << endl;
			return 0;	
		}
	}

	cout << "-1";
	return 0;
}
