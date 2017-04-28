#include <bits/stdc++.h>

using namespace std;

struct point
{
	int x;
	int y;
	point(int a, int b) 
	{
		x = a;
		y = b;
	}
};

int main()
{
	int n;
	cin >> n;
	vector<point> p;
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;
		p.push_back(point(a, b));
	}

	int super = 0;
	for (int i = 0; i < n; ++i)
	{
		unordered_set<int> exist;
		for (int j = 0; j < n; ++j)
		{
			if (i == j)
				continue;

			if (p[i].x == p[j].x)
			{
				if (p[i].y < p[j].y)
					exist.insert(3);
				if (p[i].y > p[j].y)
					exist.insert(4);
			}
			else if (p[i].y == p[j].y)
			{
				if (p[i].x < p[j].x)
					exist.insert(2);
				if (p[i].x > p[j].x)
					exist.insert(1);
			}
		}
		if (exist.size() == 4)
		{
			super++;
		}
	}
	cout << super;
	return 0;
}