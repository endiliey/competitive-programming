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
    int n, m;
    cin >> n >> m;
    vector<bool> prime(51, true);

    for(int i = 2; i * i <= 50; ++i)
    {
        if (prime[i])
        {
            for(int j = 2 * i; j <= 50; j += i)
            {
                prime[j] = false;
            }
        }
    }

    int next = -1;
    for(int i = n + 1; i <= 50; ++i)
    {
        if (prime[i])
        {
            next = i;
            break;
        } 
    }
    if (next == m)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
