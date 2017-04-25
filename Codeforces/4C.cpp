#include <bits/stdc++.h>

using namespace std;

int main()
{
	unordered_map<string, int> hmap;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		if (hmap[input] == 0)
		{
			hmap[input]++;
			cout << "OK" << endl;
		}
		else
		{
			cout << input << hmap[input] << endl;
			hmap[input]++;
		}
	}
}
