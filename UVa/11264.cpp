#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        vector<int> C;
        int n;
        long long sum = 0;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            int foo;
            cin >> foo;
            C.push_back(foo);
        }
        int coins = n > 1 ? 1 : 0;
        // get smaller coins
        for(int i = 0; i < n - 1; ++i) {
            if (sum + C[i] < C[i + 1]) {
                sum += C[i];
                ++coins;
            }
        }
        cout << coins << "\n";
    }
    return 0;
}
