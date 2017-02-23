#include <bits/stdc++.h>
#define N 100010
using namespace std;

int main()
{
	int n;
	cin >> n;
	// sieve or eratostehens
	int a[N];
	int b[N];
	int i;
	for (i = 2; i <= n + 1; i++)
		a[i] = 1;
	for (i = 2; i <= n + 1; i++)
		if (a[i])
		{
			for (int j = i; j * i <= n + 1; j++)
			{
				a[i * j] = 0;
			}
		}
	
	int k = INT_MIN;
	// end of sieve
	for (int x = 2; x <= n + 1; ++x)
	{	
		b[x] = 1;
		if (a[x] == 0) // if not prime, find the prime divisor 
		{
			for (int y = 2; y < x; ++y)
			{
				if (a[y] == 1 && (a[x] % a[y] == 0)) // check if a number is prime divisor
					b[x] = b[y] + 1;	
			}
		}
		k = max(b[x], k); 
	}
	
	
	cout << k << endl;
	for (int cntr = 2; cntr <= n + 1; cntr++)
	{
		cout << b[cntr] << " ";
	}
	return 0;
}
