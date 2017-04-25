#include <bits/stdc++.h>
#define ll long long
#define all(c) c.begin(), c.end()

using namespace std;

int main()
{
	int n;
	cin >> n;
	string sherlock, moriarty;
	cin >> sherlock >> moriarty;
	vector<int> s;
	vector<int> m;
	for (int i = 0; i < n; ++i)
	{
		s.push_back(sherlock[i] - '0');
		m.push_back(moriarty[i] - '0');
	}
	int flickM = 0, flickS = 0;
	sort(all(m));
	vector<int> m2(m);
	
	for (int i = 0; i < n; ++i)
	{
		auto minToSurvive = std::lower_bound(all(m), s[i]);
		if (minToSurvive == m.end()) // if no val can avoid
		{
			flickM++;
			auto minimumE = min_element(all(m));
			m.erase(minimumE);
		}
		else
		{
			m.erase(minToSurvive);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		auto minToFlick = std::lower_bound(all(m2), s[i] + 1);
		if (minToFlick == m2.end()) // if no val to hit
		{
			auto minimumE = min_element(all(m2));
			m2.erase(minimumE);
		}
		else
		{
			flickS++;
			m2.erase(minToFlick);
		}
	}


	cout << flickM << "\n" << flickS;
	return 0;

}
