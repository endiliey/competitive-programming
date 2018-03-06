#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    vector<char> s2;
    cin >> s;
    int length[200005];
    length[0] = 1;

    // remove 3 continuous
    s2.push_back(s[0]);
    for(int i = 1; i < (int) s.size(); ++i) {
        length[i] = 1;
        if (s[i] == s[i - 1]) length[i] = length[i - 1] + 1;

        if (length[i] >= 3) 
            continue;
        s2.push_back(s[i]);
    }
    
    for(int i = 0; i < (int) s2.size(); ++i) {
        length[i] = 1;
        if (i > 0 && s2[i] == s2[i - 1]) length[i] = length[i - 1] + 1;
        if (length[i] == 2 && i >= 2 && length[i - 2] == 2) {
            length[i] = 1;
            continue;
        }
        cout << s2[i];
    }
    return 0;
}
