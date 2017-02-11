#include <iostream>
#include <algorithm>

using std::cout; using std::cin; using std::endl;

int main()
{
    int n, m;
    cin >> n >> m;
    if (std::min(n,m) % 2 == 0)
    {
        cout << "Malvika";
    }
    else
    {
        cout << "Akshat";
    }
    return 0;
}
