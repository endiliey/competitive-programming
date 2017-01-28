#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    for (int val; cin >> val;)
    {
        if (val == 42)
        {
            break;
        }
        cout << val << endl;
    }

    return 0;
}
