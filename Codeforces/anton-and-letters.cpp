#include <iostream>
#include <unordered_set>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main()
{
    string input;
    int cntr = 0;
    getline(cin, input);
    std::unordered_set<char> letters;
    for (auto chr : input)
    {
        if (isalpha(chr))
        {
            if (letters.find(chr) == letters.end())
            {
                letters.insert(chr);
                cntr++;
            }
        }

    }

    cout << cntr;
    return 0;
}
