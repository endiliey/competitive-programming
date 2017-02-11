#include <iostream>

using std::cin; using std::cout; using std::endl;

bool isLucky(int n)
{
    while (n != 0)
    {
        if ((n % 10 != 4) && (n % 10 != 7))
        {
            return false;
        }
        n/= 10;
    }
    return true;
}

int main()
{
    int input;
    cin >> input;
    bool isAlmostLucky = false;
    for (int i = 2; i <= input; ++i)
    {
        if (isLucky(i) && (input % i == 0))
        {
            isAlmostLucky = true;
        }
    }

    if (isAlmostLucky)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
