#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ca = 0;
	string input;
	cin >> input;
	for (auto &chr : input)
	{
		if (chr == 'A')
			ca++;
	}

	if (ca > (n - ca))
		cout << "Anton";
	else if (ca == (n - ca))
		cout << "Friendship";
	else
		cout << "Danik";
	return 0;
}
