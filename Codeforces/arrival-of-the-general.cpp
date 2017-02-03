#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::cin; using std::endl; using std::vector;

int main()
{
    int n;
    cin >> n;
    vector<int> s;
    for (int i = 0, val; i != n; ++i)
    {
        cin >> val;
        s.push_back(val);
    }
    int swapCounter = 0;
    auto maxElement = max_element(s.begin(), s.end());
    auto index = maxElement - s.begin();
    while(index != 0)
    {
        std::swap(s[index], s[index - 1]);
        index--;
        swapCounter++;
    }
    auto minElement = min_element(s.rbegin(), s.rend());
    swapCounter += (minElement - s.rbegin());
    cout << swapCounter;
    return 0;
}
