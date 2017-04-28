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
    int n, s, v = 0;
    cin >> n;
    vi a(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > a[(i + 1) % n])
        {
            s = i;
            v++;
        }
    }
    if (v == 0)
    {
        cout << "0";
        return 0;
    }
    else if (v > 1)
    {
        cout << "-1";
        return 0;
    }
    else
    {
        cout << n - s - 1;
        return 0;
    }
}
