#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        map<char, int> hash;
        int n, x;
        char c;
        scanf("%d\n", &n);
        for(int i = 0; i < n; ++i)
        {
            scanf("%c %d\n", &c, &x);
            hash[c] = x;
        }
        int m;
        scanf("%d\n", &m);
        double ans = 0;

        while(m--)
        {
            while((c = getchar()) != '\n')
                ans += hash[c];
        }
        ans /= 100.0;
        printf("%.2lf$\n", ans);
    }    
    return 0;
}
