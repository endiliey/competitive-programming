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
    unordered_set<int> s;
    int foo;
    for(int i = 0; i < n; ++i)
    {
        cin >> foo;
        if (i % 2 == 0)
        {
            if (foo > i)
            {
                s.insert(n - foo + i);
            }
            else
            {
                s.insert(i - foo); 
            }
        }
        else
        {
            if (foo >= i)
            {
                s.insert(foo - i); 
            }
            else
            {
                s.insert(foo + n - i);
            }
        }
    }
    if (sz(s) == 1)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}
