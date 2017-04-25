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

int gcd(int a,int b)
{
    int temp;
    while(b > 0)
   	{
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a;
	for(int i = 0; i < n; ++i)
	{
		int foo;
		cin >> foo;
		a.push_back(foo);
	}
	int r = a[0];
	for(int i = 1; i < n; ++i)
	{
		r = gcd(r, a[i]);
	}
	if (r > 1)
	{
		cout << "YES\n0\n";
		return 0;
	}

	// Cannot do it in one-pass before
	a.push_back(0);
	int c = 0;
	int u = 0;
	for (int i = 0; i <= n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			if (c % 2 == 0)
			{
				u += c / 2;
			}
			else
			{
				u += c / 2 + 2;
			}
			c = 0;
		}	
		else
		{
			c++;
		}
	}
	cout << "YES\n";
	cout << u << endl;
	return 0;
}
