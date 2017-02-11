#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> l;
    cin >> n;
    for (int val, i = 0; i != n; ++i)
    {
        cin >> val;
        l.push_back(val);
    }

    int countOdd = 0, countEven = 0;
    vector<int>::iterator lastEven, lastOdd;
    for (auto it = l.begin(); it != l.end(); ++it)
    {
        if (*it % 2 == 0)
        {
            countEven++;
            lastEven = it;
        }
        else
        {
            countOdd++;
            lastOdd = it;
        }
    }

    if (countOdd == 1)
    {
        cout << lastOdd - l.begin() + 1;
    }
    else if (countEven == 1)
    {
        cout << lastEven - l.begin() + 1;
    }
    return 0;
}
