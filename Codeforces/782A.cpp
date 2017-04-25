#include <bits/stdc++.h>
#define all(c) c.begin(), c.end()

typedef long long ll;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int total = 0, maximum = 0;
	unordered_set<int> table;
	int val;
	while (cin >> val)
	{
		auto it = table.find(val);
		if (it != table.end())
		{
			table.erase(it);
			total--;
		}
		else
		{
			total++;
			maximum = max(maximum, total);
			table.insert(val);
		}
	}
	cout << maximum << endl;	
}
