#include <iostream>
#include <string>
#include <iterator>
#include <unordered_set>

using std::cout; using std::cin; using std::endl; using std::string;

int main()
{
    string input;
    cin >> input;
    std::unordered_set<char> vowels = {'a','i','u','e','o','y'};

    for (auto it = input.begin(); it != input.end(); ++it)
    {
        (*it) = tolower(*it);
        if ( vowels.find(*it) == vowels.end())
        {
            cout << "." << *it;
        }
    }
    return 0;
}
