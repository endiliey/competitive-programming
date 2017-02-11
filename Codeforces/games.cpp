#include <iostream>
#include <algorithm>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::vector;

int main()
{
    int n;
    cin >> n;
    long long similarCount = 0;
    vector<int> home;
    vector<int> guest;
    for (int i = 0, a, b; i != n; ++i)
    {
        cin >> a >> b;
        home.push_back(a);
        guest.push_back(b);
    }
    for (int i = 0; i != n; ++i)
    {
        similarCount += std::count(guest.begin(), guest.end(), home[i]);
    }
    cout << similarCount << endl;
    return 0;
}
