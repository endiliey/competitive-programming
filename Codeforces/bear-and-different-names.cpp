#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(decltype((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int pos[55] = {0};
	string s[55] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "Aa", "Bb", "Cc", "Dd", "Ee", "Ff", "Gg", "Hh", "Ii", "Jj", "Kk", "Ll", "Mm", "Nn", "Oo", "Pp", "Qq", "Rr", "Ss", "Tt", "Uu", "Vv", "Ww", "Xx", "Yy", "Zz", "Aaa", "Bbb", "Ccc"};
	int n, k;
	cin >> n >> k;
	string input;
	for (int i = 0; i < (n - k + 1); i++)
	{
		cin >> input;
		if (input == "YES")
		{	
			int last = -1;
			if (i - 1 >= 0)
				last = pos[i - 1];
			int prev = pos[i];
			for(int j = i + 1; j < i + k; j++)
			{
				prev++;
				if (pos[j] != last)
					pos[j] = prev;	
			}
		}
		else
		{
			pos[i + k - 1] = pos[i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << s[pos[i] % 55] << " ";
	}
	return 0;

}
