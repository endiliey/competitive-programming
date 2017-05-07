#include <bits/stdc++.h>

using namespace std;

int a[3][3];

void printlah()
{
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cout << a[i][j] % 2;
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            a[i][j] = 1;
    
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            int foo;
            cin >> foo;
            foo %= 2;
            if (foo)
            {
                a[i][j] = (a[i][j] + 1);
                if (i - 1 >= 0)
                    a[i - 1][j] = (a[i - 1][j] + 1);
                if (i + 1 < 3)
                    a[i + 1][j] = (a[i + 1][j] + 1);
                if (j - 1 >= 0)
                    a[i][j - 1] = (a[i][j - 1] + 1);
                if (j + 1 < 3)
                    a[i][j + 1] = (a[i][j + 1] + 1);
            }
        }
    }
    printlah();
    return 0;
}
