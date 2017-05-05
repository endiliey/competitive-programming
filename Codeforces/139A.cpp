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
    int n;
    cin >> n;
    int d[7];
    for(int i = 0; i < 7; ++i)
    {
        cin >> d[i]; 
    }
    int day = 0;
    while(n > 0)
    {
        n -= d[day];
        if (n <= 0)
        {
            cout << day + 1;
            return 0;
        }
        day = (day + 1) % 7;
    }
    return 0;
}
