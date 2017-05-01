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
    string s;
    cin >> s;
    
    deque<char> dq;
    dq.push_back(s[0]);
    if (n % 2 == 0)
    {
        for(int i = 1; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                dq.push_front(s[i]);
            }
            else
            {
                dq.push_back(s[i]);
            }
        }
    } 
    else
    {
        for(int i = 1; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                dq.push_back(s[i]);
            }
            else
            {
                dq.push_front(s[i]);
            }
        }
    }
    for(auto &c: dq)
    {
        cout << c;
    }
    return 0;
}
