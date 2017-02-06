#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    vector<int> dstr;
    vector<int> dbonus;
    for (int strength, bonus, i = 0; i != n; ++i)
    {
        cin >> strength >> bonus;
        dstr.push_back(strength);
        dbonus.push_back(bonus);
    }

    for (int i = 0; i != n; ++i)
    {
        auto minimumDragon = min_element(dstr.begin(), dstr.end());
        if (s > *minimumDragon)
        {
            auto index = minimumDragon - dstr.begin();
            s += dbonus[index];
            dstr[index] = INT_MAX;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
