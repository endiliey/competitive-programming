#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
    int a;
    int b;
    cin >> a >> b;
    int t = a;
    // a is like left over;
    while (a >= b)
    {
        t += a / b;
        a = a / b + a % b;
    }
    cout << t;
    return 0;
}
