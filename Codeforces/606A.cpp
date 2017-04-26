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
    int a, b, c;
    cin >> a >> b >> c;
    int x, y, z;
    cin >> x >> y >> z;
    int q = a - x;
    int w = b - y;
    int e = c - z;
    int extra = 0;
    if (q > 0)
        extra += q / 2;
    if (w > 0)
        extra += w / 2;
    if (e > 0)
        extra += e / 2;
    if (q < 0)
        extra += q;
    if (w < 0)
        extra += w;
    if (e < 0)
        extra += e;
    if (extra >= 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
