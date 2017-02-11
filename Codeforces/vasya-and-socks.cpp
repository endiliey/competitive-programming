#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
    int n, m;
    cin >> n >> m;
    int day = 0;
    while ( n > 0)
    {
        day++;
        n--;

        if ((day % m) == 0)
        {
            n += 1;
        }
    }
    cout << day;
}
