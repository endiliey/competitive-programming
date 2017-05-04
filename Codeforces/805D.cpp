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
const unsigned int modsz = 1000000007;

int main()
{
    string s;
    cin >> s;
    ll ans = 0;
    ll b = 0;
    
    for(int i = sz(s) - 1; i >= 0; i--)
    {
        if (s[i] == 'b')
        {
            b = (b+ 1) % modsz;
        }
        if (s[i] == 'a')
        {
            ans = (ans + b) % modsz;
            b = (b << 1 ) % modsz;
        }
    }
    cout << ans;
    return 0;
}
