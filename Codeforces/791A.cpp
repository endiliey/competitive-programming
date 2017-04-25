#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = 0; i <= 1000; ++i)
	{
		int limak = pow(3, i) * a;
		int bob = pow(2, i) * b;
		if (limak > bob)
		{
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}
