#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, n;
    cin >> n >> l;
    vector<int> lan;
    for (int i = 0, val; i < n; ++i)
    {
        cin >> val;
        lan.push_back(val);
    }
    std::sort(lan.begin(), lan.end());
    double d = *(lan.begin());
    for (auto it = lan.begin() + 1; it != lan.end(); ++it)
    {
        double temp = ((*it) - *(it - 1)) / 2.0;
        d = max(temp, d);
    }

    double temp = l - *(lan.end() - 1);
    d = max(temp, d);

    printf("%.9f", d);
    return 0;
}
