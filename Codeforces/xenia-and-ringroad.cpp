#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    long long cnt = 0;
    long pos = 1; // first position
    for (long long target, i = 0; i != m; ++i)
    {
        cin >> target;
        if (target < pos)
        {
            cnt += (n - pos + target);
        }
        else
        {
            cnt += (target - pos);
        }
        pos = target;
    }
    cout << cnt;
    return 0;
}
