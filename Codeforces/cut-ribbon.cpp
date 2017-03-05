#include <bits/stdc++.h>

using namespace std;

int maxCut(int n, int a, int b, int c, int memo[])
{
	if (n == 0)
		return 0;
	else if (n < 0)
		return -999999;
	else if (memo[n] != 0)
		return memo[n];
	else
		memo[n] = 1 + (max(max(maxCut(n - a, a, b, c, memo), maxCut(n - b, a, b, c, memo)), maxCut(n - c, a, b, c, memo)));
		return memo[n];
}

int main()
{
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int memo[4010] = {0};
	cout << maxCut(n, a, b, c, memo) << endl;
}
