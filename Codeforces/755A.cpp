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
    vector<bool> prime(1001 * n, true);
    for(int i = 2; i * i <= 1001 * n; ++i)
    {
        if (prime[i])
        {
            for (int j = 2 * i; j <= 1001 * n; j+= i)
            {
                prime[j] = false; 
            } 
        }
    }

    for(int m = 1; m <= 1000; ++m)
    {
        if (prime[n * m + 1] == false)
        {
            cout << m << "\n";
            return 0;
        }
    }
    return 0;
}
