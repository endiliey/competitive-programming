/*
ID: endilie1
PROG: gift1
LANG: C++11
*/
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#define ll long long

using namespace std;

int main()
{
	ofstream fout ("gift1.out");
	ifstream fin ("gift1.in");
	int NP;
	fin >> NP;
	string name;
	string n[10];
	map<string, int> money;
	for (int i = 0; i != NP; ++i)
	{
		fin >> name;
		money[name] = 0;
		n[i] = name;
	}
	
	string giver;
	while (fin >> giver)
	{
		int amount, number;
		fin >> amount >> number;
		if (number == 0)
			continue;
		for (int i = 0; i != number; ++i)
		{
			fin >> name;
			money[name] += amount / number;
		}	
		money[giver] -= amount;
		money[giver] += amount % number;
	}
	for (auto i = 0; i != NP; ++i)
	{
		fout << n[i] << " " << money[n[i]] << "\n";
	}	
	
	return 0;
}
