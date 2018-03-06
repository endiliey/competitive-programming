#include<bits/stdc++.h>
using namespace std;

int a[1234567];
long long cnt[1234567];
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    long long s = 0;
    for(int i = 0; i < n; ++i){
       cin >> a[i]; 
       s += a[i];
    }
    if (s % 3 != 0) {
        cout << "0";
        return 0;
    }
    
    // build cnt for first part
    s /= 3;
    long long ss = 0;
    for(int i = 0; i < n; ++i) {
        ss += a[i];
        if (ss == s) {
            cnt[i] = 1;
        }
    }
    for(int i = 1; i < n; ++i) {
        cnt[i] += cnt[i - 1];
    }

    // third part check if sum / 3
    long long ans = 0;
    ss = 0;
    for(int i = n - 1; i - 2 >= 0; --i) {
       ss += a[i]; 
       if (ss == s) {
           ans += cnt[i - 2]; 
       }
    }
    cout << ans;
    return 0;
}
