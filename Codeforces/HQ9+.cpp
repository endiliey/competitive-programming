#include <iostream>
#include <unordered_set>
#include <string>

using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
    string input;
    cin >> input;
    std::unordered_set<char> keywords = {'H', 'Q', '9'};
    bool printSomething = false;

    for (auto chr : input)
    {
        if (keywords.find(chr) != keywords.end())
        {
            printSomething = true;
            break;
        }
    }

    if (printSomething)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
