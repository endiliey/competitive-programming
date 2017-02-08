#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int fshn = 0, nrml = 0;
    fshn += min(a, b);
    nrml = (max(a, b) - min (a,b)) / 2;

    cout <<  fshn << " " << nrml;
    return 0;

}
