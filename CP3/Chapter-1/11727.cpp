#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for (int i = 0; i != T; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c; 
		priority_queue<int> p;
		p.push(a);
		p.push(b);
		p.push(c);
		p.pop();
		cout << "Case " << i + 1 << ": " <<  p.top() << "\n";	
	}
	return 0;
}
