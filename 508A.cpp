#include <bits/stdc++.h>

using namespace std;
int n, m;
int W[1001][1001] = {0};

bool check(int r, int c)
{
	if (r >= 1 && r <= n && c >= 1 && c <= m)
	{
		return W[r][c] == 1;
	}
	else
		return false;
}

int main()
{
	int k;
	cin >> n >> m >> k;
	for(int s = 1; s <= k; ++s)
	{
		int i, j;
		cin >> i >> j;
		W[i][j] = 1;
		bool O = check(i, j);
		bool R = check(i, j + 1);
		bool L = check(i, j - 1);
		bool T = check(i - 1, j);
		bool D = check(i + 1, j);
		bool TR = check(i - 1, j + 1);
		bool TL = check(i - 1, j - 1);
		bool BL = check(i + 1, j - 1);
		bool BR = check(i + 1, j + 1);

		// top right
		if (O && R && T && TR)
		{
			cout << s;
			return 0;
		}
		// bot right
		else if (O && R && BR && D)
		{
			cout << s;
			return 0;
		}
		// top left
		else if (O && L && TL && T)
		{
			cout << s;
			return 0;
		}
		// bot let
		else if (O && L && D && BL)
		{
			cout << s;
			return 0;
		}
	}
	cout << "0";
	return 0;
}