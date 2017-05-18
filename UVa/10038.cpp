#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
typedef long long ll;
#define sz(a) int((a).size()) 
#define PB push_back 
#define MP make_pair
#define F first
#define S second
#define all(c) (c).begin(),(c).end() 
#define present(c,x) ((c).find(x) != (c).end()) 

int main()
{
    int n, x;
    while(scanf("%d", &n) != EOF)
    {
        bool jolly = true;
        vector<bool> v(n, false);
        vi num;
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &x);
            num.PB(x);
        }

        for(int i = 1; i < n; ++i)
        {
            x = abs(num[i] - num[i-1]);
            if (x < 1 || x >= n || v[x])
            {
                jolly = false;
            } 
            else
            {
                v[x] = true;
            }
        }
        printf("%s\n", jolly ? "Jolly" : "Not jolly");
    }   
    return 0;
}
