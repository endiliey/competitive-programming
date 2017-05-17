#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        int pos = 0;
        while (pos <= s.length() && s[pos] != 'h')
            pos++;
        pos++;
        while (pos <= s.length() && s[pos] != 'a')
            pos++;
        pos++;
        while (pos <= s.length() && s[pos] != 'c')
            pos++;
        pos++;
        while (pos <= s.length() && s[pos] != 'k')
            pos++;
        pos++;
        while (pos <= s.length() && s[pos] != 'e')
            pos++;
        pos++;
        while (pos <= s.length() && s[pos] != 'r')
            pos++;
        pos++;
        while (pos <= s.length() && s[pos] != 'r')
            pos++;
        pos++;
        while (pos <= s.length() && s[pos] != 'a')
            pos++;
        pos++;
        while (pos <= s.length() && s[pos] != 'n')
            pos++;
        pos++;
        while (pos <= s.length() && s[pos] != 'k')
            pos++;
        if (pos > s.length() || s[pos] != 'k')
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    
    return 0;
}

