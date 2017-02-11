#include <iostream>
#include <unordered_set>

using std::cout; using std::cin; using std::endl;

int main()
{
    int n, p, q;
    std::unordered_set<int> l;
    cin >> n;
    cin >> p;
    for (int i = 0, val; i != p; ++i)
    {
        cin >> val;
        l.insert(val);
    }
    cin >> q;
    for (int i = 0, val; i != q; ++i)
    {
        cin >> val;
        l.insert(val);
    }

    for (int i = 1; i <= n; ++i)
    {
        if (l.find(i) == l.end())
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}
