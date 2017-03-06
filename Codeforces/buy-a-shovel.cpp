#include <bits/stdc++.h>

using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	int k, r;
	cin >> k >> r;
	for (int i = 1; i < 10; i++)
	{
		int total = i * k;
		if (total % 10 == 0 || total % 10 == r)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << 10 << endl;
	return 0;
}
