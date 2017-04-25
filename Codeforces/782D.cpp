#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<string> team;
	vector<string> home;
	for (int i = 0; i < n; i++)
	{
		string foo, bar;
		cin >> foo >> bar;
		team.push_back(foo);
		home.push_back(bar);
	}
	unordered_set<string> allname;
	unordered_set<string> reservedName;
	vector<string> answer;
	for (int i = 0; i < n; i++)
	{
		string teamStr = team[i];
		string homeStr = home[i];
		string firstC = "";
		firstC += teamStr[0];
		firstC += teamStr[1];
		firstC += teamStr[2];
		string secondC = "";
		secondC += teamStr[0];
		secondC += teamStr[1];
		secondC += homeStr[0];
		if (allname.find(secondC) == allname.end())
		{
			allname.insert(secondC);
			answer.push_back(secondC);
			reservedName.insert(firstC);
		}
		else if (reservedName.find(firstC) == reservedName.end() && allname.find(firstC) == allname.end())
		{
			allname.insert(firstC);
			answer.push_back(firstC);
		}
		else
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	for (auto &name : answer)
	{
		cout << name << endl;
	}
	return 0;
}
