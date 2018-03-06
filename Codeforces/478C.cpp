#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<long long> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());

    long long result = (a[0] + a[1] + a[2]) / 3;
    if (result > a[0] + a[1]) {
        result = (a[0] + a[1]);
    }
    cout << result;
    return 0;
}
