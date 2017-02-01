#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    long long n;
    long long m;
    long long a;

    cin >> n >> m >> a;

    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl;
    // alternatively
    // cout << ceil(m/(double) a) * ceil(n/ (double) a);

    return 0;
}
