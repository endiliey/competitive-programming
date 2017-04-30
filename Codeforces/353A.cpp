#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
#define pb push_back 
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vi x, y;
    int sumx = 0;
    int sumy = 0;
    for (int i = 0; i < n; ++i)
    {
        int foo, bar;
        cin >> foo >> bar;
        x.pb(foo);
        sumx += foo;
        y.pb(bar);
        sumy += bar;
    }
    if (sumx % 2 == 0 && sumy % 2 == 0)
    {
        cout << "0";
        return 0;
    }

    for (int i = 0; i < n; ++i)
    {
        int newx = sumx - x[i] + y[i];
        int newy = sumy - y[i] + x[i];
        if (newx % 2 == 0 && newy % 2 == 0)
        {
            cout << "1";
            return 0;        
        }
    }
    cout << "-1";
    return 0;
}
