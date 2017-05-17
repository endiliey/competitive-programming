/*
ID: endilie1
PROG: friday
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <string>
#define ll long long

using namespace std;

int leapDate(int year)
{
	if (year % 4 == 0 && year % 100 != 0 ||  year % 400 == 0)
		return 29;
	else
		return 28;
}


int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
	ll N, i = 13;
	fin >> N;
	int amount[7] = {0}; // from sunday, monday, tuesday, .
	for (int year = 1900; year != (1900 + N); year++)
	{
		amount[i % 7]++; // increase the jan
		i += 31;
		amount[i % 7]++;
		i += leapDate(year); // march
		amount[i % 7]++;
		i += 31; // april
		amount[i % 7]++;
		i += 30; // may
		amount[i % 7]++;
		i += 31; // june
		amount[i % 7]++;
		i += 30;  // july
		amount[i % 7]++;
		i += 31; // aug
		amount[i % 7]++;
		i += 31; //sept
		amount[i % 7]++;
		i += 30; // oct
		amount[i % 7]++;
		i += 31; // nov
		amount[i % 7]++;
		i += 30; // dec
		amount[i % 7]++;
		i += 31; // jan again
	}
	fout << amount[6] << " " << amount[0] << " " << amount[1] << " " << amount[2] << " " << amount[3] << " " << amount[4] << " " << amount[5] << endl;	
    return 0;
}
