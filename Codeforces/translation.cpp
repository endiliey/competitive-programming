#include <iostream>
#include <string>
#include <algorithm>

using std::cout; using std::cin; using std::endl; using std::string;

int main()
{
    string input;
    cin >> input;
    string reversed;
    cin >> reversed;

    std::reverse(input.begin(), input.end());

    if (reversed == input)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
