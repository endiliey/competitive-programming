#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    while(cin >> N) {
        int A[102][102];
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j) {
                cin >> A[i][j];
                if (i > 0) A[i][j] += A[i - 1][j];
                if (j > 0) A[i][j] += A[i][j - 1];
                if (i > 0 && j > 0) A[i][j] -= A[i - 1][j - 1];
            }
        }
        int ans = -127 * 100 * 100;
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j) {
                for(int k = i; k < N; ++k) {
                    for(int l = j; l < N; ++l) {
                        int subrect = A[k][l];
                        if (i > 0) subrect -= A[i - 1][l];
                        if (j > 0) subrect -= A[k][j - 1];
                        if (i > 0 && j > 0) subrect += A[i - 1][j - 1];

                        ans = max(ans, subrect);
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
