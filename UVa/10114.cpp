#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int dur, rec;
	double down, amount, decP[101];
	while (true)
	{
		cin >> dur >> down >> amount >> rec;
		if (dur < 0)
			break;
		
		int month;
		double p;
		while (rec--)
		{
			cin >> month >> p;
			for (int i = month; i < 101; ++i)
				decP[i] = p;
		}

		int curr = 0;
		double monthlyPayment = amount / dur;
		double curVal = (amount + down) * (1 - decP[0]);
		double curLoan = amount;
		while (curVal < curLoan)
		{
			curr++;
			curLoan -= monthlyPayment;
			curVal = curVal * (1 - decP[curr]);
		}

		cout << curr << " month";
		if (curr != 1)
			cout << "s";
		cout << "\n";
	}
	return 0;
}
