#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::vector;

int main()
{
    int n;
    cin >> n;
    vector<int> sequences;
    for (int i = 0, val; i != n; ++i)
    {
        cin >> val;
        sequences.push_back(val);
    }

    int maxCount = 0, tempCount = 0;
    for (int j = 0; j != n; ++j)
    {
        tempCount++;

        if (tempCount > maxCount)
        {
            maxCount = tempCount;
        }

        if (j + 1 != sequences.size() && sequences[j] > sequences[j + 1])
        {
            tempCount = 0;
        }

    }
    cout << maxCount;
    return 0;
}
