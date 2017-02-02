#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
    int n;
    cin >> n;
    int luckyDigits = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
            luckyDigits++;
        n /= 10;
    }

    while (luckyDigits != 0)
    {
        if (luckyDigits % 4 != 0 && luckyDigits % 7 != 0)
        {
            cout << "NO";
            return 0;
        }

        luckyDigits /= 10;
    }
    cout << "YES";
    return 0;
}
