#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int val;
    cin >> val;
    int cntr = 0;
    int maximum = val;
    int minimum = val;
    for (int i = 1; i != n; ++i)
    {
        cin >> val;
        if (val > maximum)
        {
            cntr++;
        }
        else if (val < minimum)
        {
            cntr++;
        }
        maximum = max(maximum, val);
        minimum = min(minimum, val);
    }
    cout << cntr;
    return 0;
}
