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
    int h[2], m[2];
    for(int i = 0; i < 2; ++i)
        scanf("%d:%d", &h[i], &m[i]);
    h[0] -= h[1];
    m[0] -= m[1];
    if (m[0] < 0)
        m[0] += 60, h[0]--;
    if (h[0] < 0)
        h[0] += 24;
    printf("%02d:%02d\n", h[0], m[0]);
    return 0;
}
