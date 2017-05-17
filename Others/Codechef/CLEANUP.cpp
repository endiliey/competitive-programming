#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    unordered_map<int,bool> task;
    bool chefTurn = true;
    vector<int> chef;
    vector<int> assist;
    cin >> t;
    for (int i = 1, n, m; i <= t; ++i)
    {
        cin >> n >> m;
        for (int val, j = 1; j <= m; ++j)
        {
            cin >> val;
            task.insert(pair<int,bool>(val, true));
        }
        for (int x = 1; x <= n; ++x)
        {
            if (task[x] == false)
            {
                if (chefTurn)
                {
                    chef.push_back(x);
                    chefTurn = false;
                }
                else
                {
                    assist.push_back(x);
                    chefTurn = true;
                }
            }
        }

        for (auto chefTask : chef)
        {
            cout << chefTask << " ";
        }
        chef.clear();
        cout << endl;
        for (auto assistTask : assist)
        {
            cout << assistTask << " ";
        }
        assist.clear();
        cout << endl;
        task.clear();
        chefTurn = true;
    }
    return 0;
}
