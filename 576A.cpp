#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> guess;
	// sieve of erathosthenes
	vector<bool> prime(n + 1, true);
	for(int i = 2; i * i <= n; ++i)
	{
		if (prime[i])
		{
			for (int j = 2 * i; j <=n; j += i)
			{
				prime[j] = false;
			}
		}
	}

	// let's exclude one from our guess
	prime[1] = 0;
	for(int i = 1; i <= n; ++i)
	{
		if (prime[i])
		{
			int q = i;
			while(q <= n)
			{
				guess.push_back(q);
				q *= i;
			}
		}
	}
	int len = (int) guess.size();
	cout << len << "\n";
	for(auto &g: guess)
	{
		cout << g << " ";
	}
	return 0;
}