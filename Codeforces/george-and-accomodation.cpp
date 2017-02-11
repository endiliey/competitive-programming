#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
    int n, qi, pi, counter = 0;
    cin >> n;
    for (int i = 0; i != n; ++i)
    {
        cin >> pi >> qi;
        if (qi - pi >= 2)
            counter++;
    }
    cout << counter;
    return 0;
}
