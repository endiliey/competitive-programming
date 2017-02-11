#include <iostream>
#include <unordered_set>

using std::cout; using std::cin; using std::endl;

bool isDistinct(int year)
{
    std::unordered_set<int> digits;
    while (year != 0)
    {
        auto digit = year % 10;
        if (digits.find(digit) != digits.end())
        {
            return false;
        }
        digits.insert(digit);
        year /= 10;
    }

    return true;
}

int main()
{
    int year;
    cin >> year;
    year = year +1;

    while (!isDistinct(year))
    {
        year++;
    }
    cout << year;
    return 0;
}
