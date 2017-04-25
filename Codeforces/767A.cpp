#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll biggestNeeded = n;
    vector<ll> s;
    unordered_set<ll> available;

    for (ll val, i = 0; i != n; ++i)
    {
        cin >> val;
        s.push_back(val);
        available.insert(val);
        if (available.find(biggestNeeded) != available.end())
        {
            while (available.find(biggestNeeded) != available.end())
            {
                cout << biggestNeeded << " ";
                biggestNeeded--;
            }
        }
        if (i + 1 != n)
            cout << endl;
    }
    return 0;
}
