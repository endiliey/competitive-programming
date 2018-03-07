#include<bits/stdc++.h>
using namespace std;

struct car {
    string M;
    int L, H;
    car(string s, int a, int b) {
        M = s, L = a, H = b;
    }
};


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int D;
        vector<car> v;
        cin >> D;
        for(int i = 0; i < D; ++i) {
            string M;
            int L, H;
            cin >> M >> L >> H;
            v.push_back(car(M, L, H));
        }
        int Q, P;
        vector<string> ans;
        cin >> Q;
        for(int i = 0; i < Q; ++i) {
            cin >> P;
            ans.clear();
            for(int j = 0; j < D; ++j) {
                if (v[j].L <= P && v[j].H >= P) {
                    ans.push_back(v[j].M);
                }
            }
            if (ans.size() == 0 || ans.size() > 1) cout << "UNDETERMINED\n";
            else cout << ans[0] << "\n";
        }
        if (T > 0) cout << "\n";
    }
    return 0;
}
