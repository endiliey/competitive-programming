#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int n;
	int swap = 0;
	cin >> n;
	vector<int> a;
	vector<int> b;
	int cntra[6] = {0};
	int cntrb[6] = {0};
	int foo;
	for (int i = 0; i != n; ++i)
	{
		cin >> foo; 
		a.push_back(foo);
		cntra[foo]++;
	}

	for (int i = 0; i != n; ++i)
	{
		cin >> foo;
		b.push_back(foo);
		cntrb[foo]++;
	}
	int swapper = 0;
	for (int i = 1; i <= 5; ++i)
	{
		if ((cntra[i] + cntrb[i]) % 2 != 0)
		{
			cout << "-1" << endl;
			return 0;
		}
		while(cntra[i] != cntrb[i])
		{
			if (cntra[i] < cntrb[i])
			{
				cntra[i] += 1;
				cntrb[i] -= 1;
				swapper++;
			}
			else if (cntra[i] > cntrb[i])
			{
				cntra[i] -= 1;
				cntrb[i] += 1;
				swapper++;
			}
		}
	}

	cout << swapper / 2;
	return 0;
}
