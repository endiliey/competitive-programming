#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	ll n, sum;
	cin >> n;
	sum = n * ( n + 1 ) / 2;
	for(int i = 0; i < n - 1; ++i) {
		int foo;
		cin >> foo;
		sum -= foo;
	}
	cout << sum;
    return 0;
}
