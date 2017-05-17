#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k, k_pos;
    vector<int> playlist;
    cin >> t;
    for (int i = 0; i != t; ++i)
    {
        cin >> n;
        for (int val, j = 0; j != n; ++j)
        {
            cin >> val;
            playlist.push_back(val);
        }
        cin >> k_pos;
        k = playlist[k_pos - 1];
        std::sort(playlist.begin(), playlist.end());
        auto pos = std::find(playlist.begin(), playlist.end(), k);
        cout << pos - playlist.begin() + 1 << endl;
        playlist.clear();
    }
    return 0;
}
