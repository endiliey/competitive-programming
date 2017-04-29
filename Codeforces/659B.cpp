#include <bits/stdc++.h>

using namespace std;

struct member
{
    string name;
    int score;
    member(string a, int b)
    {
        name = a;
        score = b;
    }

    bool operator< (const member &target)
    {
        return score < target.score;
    }
};

vector<member> v[10010];
unordered_map<int, int> e[10010];
pair<int, int> maxi[10010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        string nm;
        int foo, bar;
        cin >> nm >> foo >> bar;
        v[foo].push_back(member(nm, bar));
        e[foo][bar]++;
    }

    for (int i = 1; i <= m; ++i)
    {
        sort(v[i].begin(), v[i].end());
        member last = v[i][v[i].size() - 1];
        member seclast = v[i][v[i].size() - 2]; 
        if (e[i][last.score] > 2)
        {
            cout << "?" << endl;
        }
        else if (e[i][last.score] == 2)
        {
            cout << last.name << " " << seclast.name << "\n";
        }
        else if (e[i][last.score] == 1)
        {
            if (e[i][seclast.score] > 1)
            {
                cout << "?" << endl;
            }
            else if (e[i][seclast.score] == 1)
            {
                cout << last.name << " " << seclast.name << "\n";
            }
        }
    }
	return 0;
}
