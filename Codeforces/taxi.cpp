#include <iostream>
#include <algorithm>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::vector;

int main()
{
    int n, taxiAmount = 0, taxiSpace;
    cin >> n;

    vector<int> group;
    for(int i = 0, val; i < n; i++)
    {
        cin >> val;
        group.push_back(val);
    }
    std::sort(group.begin(), group.end());

    for (decltype(group.size()) low = 0, high = group.size() - 1; low <= high;)
    {
        if (low == high)
        {
            taxiAmount++;
            break;
        }

        taxiSpace = 4 - group[high];
        if (group[low] <= taxiSpace)
        {
            group[high] += group[low];
            low++;
        }
        else
        {
            high--;
            taxiAmount++;
        }
    }
    cout << taxiAmount;
    return 0;
}


