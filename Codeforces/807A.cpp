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
    int mni = INT_MAX;
    bool change = false;
    bool sorted = true;
    for(int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        mni = min(a, mni);
        if (a != b)
        {
            change = true;
        }
        if (i != 0 && a > mni)
        {
            sorted = false; 
        }
    }
    if (change == true)
    {
        cout << "rated";
        return 0;
    }
    else if (change == false && sorted == false)
    {
        cout << "unrated";
    }
    else
    {
        cout << "maybe";
    }
    return 0;
}
