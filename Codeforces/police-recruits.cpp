#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int foo;
	int police = 0;
	int untreat = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> foo;
		if (foo == -1)
		{
			if (--police < 0)
			{
				untreat++;
				police = 0;
			}
		}
		else
			police += foo;
	}

	cout << untreat << endl;
	return 0;
}
