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
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    unordered_map<char, int> f;
    for(auto &c : s)
    {
        f[c]++;
    }
    int ans = abs(f['U'] - f['D']);
    ans += abs(f['L'] - f['R']);
    if (ans % 2 == 0)
    {
        cout << ans / 2;
    }
    else
    {
        cout << "-1";
    }
    return 0;
}
