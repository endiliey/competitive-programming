#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, B, H, W;
	while (cin >> N >> B >> H >> W)
	{
		string result = "stay home";
		int minimumCost = INT_MAX;
		for (int i = 0; i < H; ++i)
		{
			int p;
			cin >> p;
			for (int j = 0; j < W; ++j)
			{
				int space;
				cin >> space;
				if (space >= N && N * p <= B)
				{
					minimumCost = min(minimumCost, N * p);
					result = to_string(minimumCost);
				}
			}
		}
		cout << result << "\n";
	}
}
