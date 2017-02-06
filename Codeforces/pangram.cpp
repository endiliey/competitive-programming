#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string input;
    cin >> input;
    int cntr = 0;
    unordered_set<char> letters;
    for (int i = 0; i != n; ++i)
    {
        if (letters.find(tolower(input[i])) == letters.end())
        {
            letters.insert(tolower(input[i]));
            cntr++;
        }
    }
    if (cntr == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
