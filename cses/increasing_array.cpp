#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	
	int N;
	cin >> N;
	ll v[N], ans = 0;
	for (int i = 0; i < N; ++i) {
		cin >> v[i];
	}
	for(int i = 1; i < N; ++i) {
		ll diff = v[i - 1] - v[i];
		if (diff > 0) {
			ans += diff;
			v[i] = v[i - 1];
		}
	}
	cout << ans;
    return 0;
}
