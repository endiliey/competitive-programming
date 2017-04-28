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
    for (int i = 1; i <= n / 2 +1; ++i)
    {
        for (int j = 1; j <= n/2 - i + 1; ++j)
            cout << "*";
        for (int j = 1; j <= 2 * i - 1; ++j)
            cout << "D";
        for (int j = 1; j <= n / 2 - i + 1; ++j)
            cout << "*";
        cout << "\n";
    }

    for (int i = 1; i <= n / 2; ++i)
    {
        for (int j = 1; j <= i; ++j)
            cout << "*";
        for (int j = 1; j <= n - 2 * i; ++j)
            cout << "D";
        for (int j = 1; j <= i; ++j)
            cout << "*";
        cout << "\n";
    }
	return 0;
}
