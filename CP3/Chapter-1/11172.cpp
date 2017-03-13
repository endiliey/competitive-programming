#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int foo, bar;
		cin >> foo >> bar;
		if (foo < bar)
			cout << "<\n";
		else if (foo == bar)
			cout << "=\n";
		else
			cout << ">\n";
	}

	return 0;
}
