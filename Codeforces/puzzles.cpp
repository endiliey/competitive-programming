#include <iostream>
#include <vector>
#include <algorithm>
#define all(c) c.begin(),c.end()

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> container;
    for (int i = 0, val; i != m; ++i)
    {
        cin >> val;
        container.push_back(val);
    }

    std::sort(all(container));
    int tempMin;
    int maxLocal = *max_element(container.begin(), container.begin() + n);
    int minLocal = *min_element(container.begin(), container.begin() + n);
    int greedyMin = maxLocal - minLocal;

    for (int i = 1; (i + n - 1)!= container.size(); ++i)
    {
        maxLocal = *max_element(container.begin() + i, container.begin() + i + n);
        minLocal = *min_element(container.begin() + i, container.begin() + i + n);
        tempMin = maxLocal - minLocal;
        greedyMin = std::min(greedyMin, tempMin);
    }
    cout << greedyMin;
    return 0;
}
