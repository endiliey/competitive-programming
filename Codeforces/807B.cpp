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

set<int> gen(int s)
{
    set<int> winner;
    int div = (int) s / 50;
    int i = div % 475;

    for(int j = 0; j < 25; ++j)
    {
        i = (i * 96 + 42) % 475;
        winner.insert(i + 26);
    }
    return winner;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int p, x, xreal, y;
    cin >> p >> xreal >> y;
    x = xreal;
    int hack = 0;
    int hack1 = 0; // fail first then hacl
    int hack2 = 0; // just keep hacking
    if (x < y)
    {
        int need = (y - x) / 100;
        hack += need;
        x += (need * 100);
    }
    else if (x >= y)
    {
        int fail = (x - y) / 50;
        x -= (fail * 50);
    }
    int x2 = x - 50;

    // for keep suceed
    set<int> winner = gen(x);
    while(winner.find(p) == winner.end())
    {
        x += 100;
        if (x > xreal)
            ++hack1;
        winner = gen(x);
    }

    set<int> winner2 = gen(x2);
    while(winner2.find(p) == winner2.end() || x2 < y)
    {
        x2 += 100;
        if (x2 > xreal)
            ++hack2;
        winner2 = gen(x2);
    }
    
    hack += min(hack1, hack2);
    cout << hack;
    return 0;
}
