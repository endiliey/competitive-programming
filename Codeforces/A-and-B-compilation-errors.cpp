#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> err(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> err[i];
    }

    unordered_map<int, int> l1;
    unordered_map<int, int> l2;
    int foo;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> foo;
        l1[foo]++;
    }

    for (auto &num : err)
    {
        if (--l1[num] < 0)
        {
            cout << num << endl;
            l2[num]++;
        }
    }

    for (int i = 0; i < n - 2; ++i)
    {
        cin >> foo;
        l2[foo]++;
    }

    for (auto &num : err)
    {
        if (--l2[num] < 0)
            cout << num << endl;
    }

    return 0;
}
