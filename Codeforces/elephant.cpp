#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
    int x, extra;
    cin >> x;
    extra = (x % 5 == 0) ? 0 : 1;

    cout << x / 5 + extra;
    return 0;

}
