#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::cin; using std::endl; using std::vector;

int main()
{
    int n;
    cin >> n;
    vector<int> num;
    for (int i = 0, val; i != n; ++i)
    {
        cin >> val;
        num.push_back(val);
    }

    int low = 0;
    int high = num.size() - 1;
    int iteration = 0;
    while (low < high)
    {
        if (iteration % 2 == 0)
        {
            std::swap(num[low], num[high]);
        }
        iteration++;
        low++;
        high--;
    }

    for (auto number : num)
    {
        cout << number << " ";
    }
    return 0;
}
