#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int cntrUpper = 0;
    int cntrLower = 0;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (isupper(*it))
        {
            cntrUpper++;
        }
        else
        {
            cntrLower++;
        }
    }

    if (cntrUpper > cntrLower)
    {
        for (auto &chr : s)
        {
            chr = toupper(chr);
        }
    }
    else
    {
        for (auto &chr : s)
        {
            chr = tolower(chr);
        }
    }

    cout << s;
    return 0;
}
