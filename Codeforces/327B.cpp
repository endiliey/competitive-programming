#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int sz = 10000000;
	vector<bool> prime(sz, true);
	for(int i = 2; i <= sz; ++i)
	{
		if (n <= 0)
			break;
		if (prime[i] == true)
		{
			cout << i << " ";
			--n;
			for(int j = 2 * i; j <= sz; j += i)
			{
				prime[j] = false;
			}
		}
		
	}
	return 0;
}