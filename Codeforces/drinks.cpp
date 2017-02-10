#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for(int i = 0, val; i != n; ++i)
    {
        cin >> val;
        sum += val;
    }
    printf("%.9f", sum / n);
    return 0;
}
