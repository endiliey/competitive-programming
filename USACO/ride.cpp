/*
ID: endilie1
PROG: ride
LANG: C++11
*/
#include <iostream>
#include <string>
#include <fstream>
#define ll long long

using namespace std;

ll convert(string s)
{
	ll sum = s[0] - 'A' + 1;
	for (auto i = 1; i < s.length(); i++)
	{
		sum *= (s[i] - 'A' + 1);	
	}
	return sum;
}


int main()
{
	ofstream fout ("ride.out");
	ifstream fin ("ride.in");
	string a, b;
	fin >> a >> b;
	if (convert(a) % 47 == convert(b) % 47)
		fout << "GO\n";
	else
		fout << "STAY\n";
	return 0;
}
