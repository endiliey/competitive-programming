#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::cin; using std::endl; using std::vector; using std::string;

int main()
{
    string a, b;
    cin >> a >> b;
    vector<int> v1;
    for (int i = 0; i != a.size(); ++i)
    {
        if (a[i] == b[i])
        {
            v1.push_back(0);
        }
        else
        {
            v1.push_back(1);
        }
    }

    for (auto val : v1)
    {
        cout << val;
    }
    return 0;
}
