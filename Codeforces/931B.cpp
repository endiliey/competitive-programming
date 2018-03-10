#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, a, b;
    cin >> n >> a>> b;
    int round = 0;

    while(a != b) {
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        ++round;
    }
    if (1 << round == n) cout << "Final!";
    else cout << round;
    return 0;
}
