#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n, maximum;
    cin >> n;
    maximum = n;
    if (n / 10 > maximum)
    {
        maximum = n / 10;
    }
	if (n % 10 + (n / 100)*10 > maximum)
    {
        maximum = n % 10 + (n / 100)*10;
    }
    cout << maximum;
    return 0;
}
