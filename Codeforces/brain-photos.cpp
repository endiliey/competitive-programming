#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	char foo;
	for (int i = 0; i < n * m; ++i)
	{
		cin >> foo;
		if (foo != 'W' && foo != 'B' && foo != 'G')
		{
			cout << "#Color" << endl;
			return 0;
		}
	}

	cout << "#Black&White" << endl;
	return 0;
}
