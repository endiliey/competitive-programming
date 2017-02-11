#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
    int n, m, z;
    cin >> n >> m >> z;
    int killed = 0;

    for (int i = 1; i <= z; ++i)
    {
        if (i % n == 0 && i % m == 0)
        {
            killed++;
        }
    }
    cout << killed;
    return 0;
}
