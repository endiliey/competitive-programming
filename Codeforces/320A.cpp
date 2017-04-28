#include <bits/stdc++.h>

using namespace std;

int main() 
{
	string n;
	cin >> n;
	int s = n.size();
	for (int i = 0; i < s; ++i) 
	{
		if (n[i] == '1') 
		{
			if (i + 1 < s && n[i + 1] == '4') 
			{
				if (i + 2 < s && n[i + 2] == '4')
				{
					i++;
				}
				i++;
			}
		}
		else 
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}