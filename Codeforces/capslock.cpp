#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl; using std::string;
int main()
{
    string input;
    cin >> input;
    bool isAccident = true;
    for (auto it = input.begin() + 1; it != input.end(); ++it)
    {
        if (islower(*it))
        {
            isAccident = false;
        }
    }
    if (isAccident)
    {
        for (auto &chr : input)
        {
            if (isupper(chr))
            {
                chr = tolower(chr);
            }
            else
            {
                chr = toupper(chr);
            }
        }
    }
    cout << input;
    return 0;
}
