#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define PB push_back 
#define MP make_pair
#define F first
#define S second
#define all(c) (c).begin(),(c).end() 
#define REP(i,a,b) for (int i = a; i < b; ++i)
#define REP2(i,a,b) for (int i = a; i <= b; ++i)
#define tr(c,i) for(decltype((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fill(a, v) memset(a, v, sizeof a)
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s, t;
    cin >> s >> t;
    sort(all(s));
    sort(all(t));
    reverse(all(t));
    
    int n = sz(s);

    deque<char> a, b;
    REP(i, 0, (n + 1)/2) 
        a.PB(s[i]);
    REP(i, 0, n/2) 
        b.PB(t[i]);
   

    string ansr = "";
    string ansl = ""; 
    REP(i, 0, n)
    {
        if (i & 1) // p2 turn
        {
            if (!a.empty() && b.front() > a.front())
            {
                ansl += b.front();
                b.pop_front();
            }
            else
            {
                ansr += b.back();
                b.pop_back();
            }
        }
        else // p1 turn
        {
            if (!b.empty() && a.front() >= b.front())
            {
                ansr += a.back();
                a.pop_back();
            }
            else
            {
                ansl += a.front();
                a.pop_front();
            }
        }
    }
    
    reverse(all(ansr));
    ansl += ansr;
    cout << ansl;
    return 0;
}
