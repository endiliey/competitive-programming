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
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a = sqrt(s1 * s3 / s2);
    int b = sqrt(s1 * s2 / s3);
    int c = sqrt(s2 * s3 / s1);
    cout << 4 * (a + b + c);
    return 0;
}
