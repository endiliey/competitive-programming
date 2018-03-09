#include<bits/stdc++.h>
using namespace std;

int main() {
    int k;
    while(cin >> k) {
        vector<pair<int, int>> v;
        for(int y = k + 1; y <= 2 * k; ++y) {
            if ((k * y) % ( y - k ) == 0) v.push_back(make_pair((k * y) / (y - k), y));
        }

        cout << v.size() << "\n";
        for (auto ans : v) {
            cout << "1/" << k << " = 1/" << ans.first << " + 1/" << ans.second << "\n";
        }
    }
    return 0;
}
