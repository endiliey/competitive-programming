#include <iostream>
#include <cstring>
#include <algorithm>
#define MAXN 222222
#include <cstdio>
typedef long long ll;
using namespace std;

string x, y;
int a[MAXN];

int in[MAXN];

string d;

int main()
{
	std::ios_base::sync_with_stdio(false);
	cin >> x >> y;
	int n = x.size();
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i]--;
	}
	int lo = 0, hi = n;
	while (lo < hi)
   	{
		int mid = (lo + hi + 1) / 2;
		memset(in, 0, sizeof in);

		for (int i = mid; i < n; i++)
			in[a[i]] = 1; 

		d = "";
		for (int i = 0; i < n; i++) {
			if (in[i])
				d += x[i];
		}
		int k = 0;

		for (int i = 0; i < (int) d.size(); i++) {
			if (d[i] == y[k])
				k++;
			if (k >= (int) y.size())
				break;
		}
			if (k >= (int) y.size())
				lo = mid;
			else
				hi = mid - 1;
	}
	cout << lo << endl;
	return 0;
}
