#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> box;
    for (int val, i = 0; i != n; ++i)
    {
        cin >> val;
        box.push_back(val);
    }

    std::sort(box.begin(), box.end());
    for (auto cubes : box)
    {
        cout << cubes << " ";
    }
    return 0;
}
