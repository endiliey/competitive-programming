#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v1;
	for (int val, i = 0; i != n; ++i)
	{
		cin >> val;
		v1.push_back(val);
	}	
	
	int diff = INT_MAX;
	sort(v1.begin(), v1.end());
	for (int i = 0; i != n - 1; ++i)
	{
		if (abs(v1[i + 1] - v1[i]) < diff)
		{
			diff = abs(v1[i + 1] - v1[i]);
		}				
	}
	cout << diff << endl;
	return 0;
}

