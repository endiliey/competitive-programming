#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string input;
	string output = "";
	bool seatAvailable = false;
	for (int i = 0; i != n; ++i)
	{
		cin >> input;
		if (!seatAvailable)
		{
				if (input[0] == 'O' && input [1] == 'O')
				{
					seatAvailable = true;
					output += "++|"; 
					output = output + input[3] + input[4];
				}
				else if (input[3] == 'O' && input[4] == 'O')
				{
					seatAvailable = true;
					output = output + input[0] + input[1];
					output += "|++";
				}
				else
				{
					output += input;		
				}
		}
		else
		{
			output += input;
		}
		output += "\n";
	}
	if (seatAvailable)
	{
		cout << "YES" << endl;
		cout << output << endl;
	}	
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}
