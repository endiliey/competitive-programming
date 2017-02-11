#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> bird;
	for (int val, i = 0; i != n; ++i)
	{
		cin >> val;
		bird.push_back(val);
	}	
	
	int maximum = 0, index = 1;
	for (int i = 1; i <=5 ; ++i)
	{
		int temp = count(bird.begin(), bird.end(), i);
		if (temp > maximum)
		{
			maximum = temp;
			index = i;
		}
	}

	cout << index << endl;
}
