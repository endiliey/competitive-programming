#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;
typedef vector<pair<int, int>> vii;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    vii path;
    int dir = 1, x = 0, y = 0;
    path.pb(mp(x + 1, y + 1));

    while(true) {
        y += dir;
        if (y == m) dir *= -1, y = m - 1, x++;
        if (y == -1) dir *= -1, y = 0, x++;
        if (x == n) break;

        path.pb(mp(x + 1, y + 1));
    }

    for(int i = 0; i < k - 1; i++) {
        cout << "2 ";
        cout << path[2 * i].F << " " << path[2 * i].S << " ";
        cout << path[2 * i + 1].F << " " << path[2 * i + 1].S << "\n";
    }
    cout << (int) path.size() - 2 * (k - 1) << " ";
    for(int i = 2 * (k - 1); i < (int) path.size(); ++i) {
        cout << path[i].F << " " << path[i].S << " ";
    }
    return 0;
}
