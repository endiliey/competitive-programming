#include <bits/stdc++.h>

using namespace std;

int main()
{
    string output = "";
    int n;
    cin >> n;

    bool flag = true;
    while (n > 0)
    {
        if (flag)
        {
            output += "I hate";
            flag = false;
        }
        else
        {
            output += "I love";
            flag = true;
        }

        if (--n != 0)
        {
            output += " that ";
        }
    }

    output += " it";

    cout << output;
    return 0;
}
