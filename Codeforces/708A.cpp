#include <bits/stdc++.h>

using namespace std;

char shift(char c)
{
	int cint = (int) (c - 'a') - 1;
	char ans = (char) cint + 'a';

	if (c == 'a')
	{
		return 'z';
	}
	return ans;
}

void print_smaller(string s)
{
	int sz = (int) s.size();
	int i = 0;
	if (s[0] == 'a')
	{
		while(s[i] == 'a' && i < sz)
		{
			cout << 'a';
			i++;
		}
	}
	while(s[i] != 'a' && i < sz)
	{
		cout << shift(s[i]);
		i++;
	}
	while(i < sz)
	{
		cout << s[i];
		i++;
	}
	return;
}


int main()
{
	string s;
	cin >> s;

	int stop = (int) s.size() - 1;
	int start = 0;
	bool found = false;
	unordered_set<char> distinct;

	// check unique
	for(int i = 0; i < (int) s.size(); ++i)
	{
		distinct.insert(s[i]);
	}

	// if all is 'a', we must make it bigger
	if (distinct.size() == 1 && distinct.find('a') != distinct.end())
	{
		cout << s.substr(0, s.size() - 1) << 'z';
		return 0;
	}
	else
	{
		print_smaller(s);
		return 0;
	}
	
}