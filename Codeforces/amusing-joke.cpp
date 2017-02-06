#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    std::unordered_map<char, int> w, f;

    for (auto it = s1.begin(); it != s1.end(); ++it)
    {
        w[*it]++;
    }
    for (auto it = s2.begin(); it != s2.end(); ++it)
    {
        w[*it]++;
    }

    string s3;
    cin >> s3;
    if (s1.size() + s2.size() != s3.size())
    {
        cout << "NO";
        return 0;
    }

    for (auto chr : s3)
    {
        auto letterCount = std::count(s3.begin(), s3.end(), chr);
        if (letterCount != w[chr])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
