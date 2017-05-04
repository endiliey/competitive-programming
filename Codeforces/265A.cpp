#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s, r;
	cin >> s >> r;
	int pos = 1;
	for(auto &ch : r)
	{
		if (ch == s[pos - 1] && pos < s.size())
		{
			++pos;
		}
	}
	cout << pos;
	return 0;
}