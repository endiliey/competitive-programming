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
typedef long long ll;
int a[1010][1010]; // actor pos
int b[1010][1010][4]; // camera position with direction
// 0 is top
// 1 is left
// 2 is bot
// 3 is right

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin >> a[i][j];
    
    //build prefix sum on dir    
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            b[i][j][0] = b[i - 1][j][0] + a[i][j], b[i][j][1] = b[i][j-1][1] + a[i][j];

    for(int i = n; i >= 1; --i)
        for(int j = m; j >= 1; --j)
            b[i][j][2] = b[i + 1][j][2] + a[i][j], b[i][j][3] = b[i][j+1][3] + a[i][j];

    int ans = 0;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if (a[i][j] == 0)
                for(int d = 0; d < 4; ++d)
                    ans += b[i][j][d] != 0;
    cout << ans;
    return 0;
}
