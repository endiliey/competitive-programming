#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::vector;

bool visitCell (const vector<int> &pRange, int pos, int target)
{
    if (pos == target)
    {
        return true;
    }
    else if (pos > target)
    {
        return false;
    }
    else
    {
        return visitCell(pRange, pos + pRange[pos], target);
    }
}

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> portalRange;
    for (int val, i = 0; i != n - 1; ++i)
    {
        cin >> val;
        portalRange.push_back(val);
    }

    if (visitCell (portalRange, 0, t - 1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
