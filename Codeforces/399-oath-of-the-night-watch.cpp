#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{	
	int n, support = 0;
	cin >> n;
	vector<int> steward;
	for (int val, i = 0; i !=n ; ++i)
	{
		cin >> val;
		steward.push_back(val);	
	}	
	int maximum = *max_element(steward.begin(), steward.end());
	int minimum = *min_element(steward.begin(), steward.end());
	for (int i = 0; i != n; ++i)
	{
		if (steward[i] > minimum && steward[i] < maximum)
			support++;
	}

	cout << support;
	return 0;
}
