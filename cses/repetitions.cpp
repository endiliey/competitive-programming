#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	string s;
	cin >> s;
	int longest = 1, N = (int) s.length();
	int len[N];
	len[0] = 1;	
	for(int i = 1; i < N; ++i) {
		len[i] = 1;
		if (s[i] == s[i - 1]) {
			len[i] = len[i - 1] + 1;
			longest = max(longest, len[i]);
		}
	}
	cout << longest;
    return 0;
}
