#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    cout << min(n, m) + 1 << "\n";
    for(int i = 0; i <= min(n, m); ++i) {
        cout << i << " " << min(n, m) - i << "\n";
    }
    return 0;
}
