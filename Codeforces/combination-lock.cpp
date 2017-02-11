#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string l1, l2;
    int cntr = 0;
    cin >> l1 >> l2;
    for (int i = 0; i != n; ++i)
    {
        cntr += min(10 - abs(l2[i] - l1[i]), abs(l2[i] - l1[i]));
    }
    cout << cntr;
    return 0;
}
