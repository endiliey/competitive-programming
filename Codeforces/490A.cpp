#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> one, two, three;
	for (int val, i = 0; i != n; ++i)
	{
		cin >> val;
		if (val == 1)
			one.push_back(i + 1);
		else if (val == 2)
			two.push_back(i + 1);
		else if (val == 3)
			three.push_back(i + 1);
	}

	int minimum = min(min(one.size(), two.size()), three.size());
	cout << minimum << "\n";
	for (int i = 0; i != minimum ;++i)
	{
		cout << one[i] << " " << two[i] << " " << three[i] << "\n";
	}

	return 0;
}
