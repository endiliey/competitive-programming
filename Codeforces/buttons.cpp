#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    // 1*(n-1)+1 + 2*(n-2)+1 + 3*(n-3)+1 + ... + n*(n-n)+1
    cout << (n - 1) * n * (n + 1) / 6 + n << endl;
    return 0;
}
