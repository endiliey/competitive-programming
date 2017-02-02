#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main()
{
    string input;
    cin >> input;

    // delete first many WUB
    while(input.size() >= 3 && input.substr(0, 3) == "WUB")
    {
        input.erase(0, 3);
    }
    // delete last many WUB
    while(input.size() >= 3 && input.substr(input.size() - 3, input.size()) == "WUB")
    {
        input.erase(input.size() - 3, input.size());
    }

    string output = "";
    for (int i = 0; i != input.size();)
    {
        if (input.substr(i, 3) == "WUB")
        {
            output += " ";
            while(input.substr(i, 3) == "WUB")
            {
                i+=3;
            }
        }
        else
        {
            output += input[i];
            i++;
        }
    }

    cout << output;
    return 0;
}
