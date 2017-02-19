#include <bits/stdc++.h>
#define MAXVAL 1000000
using namespace std;

int main()
{
    int T, index;
    cin >> T;
    long long minimum = 0;
    for (int N, M, x = 0; x != T; ++x)
    {
        cin >> N >> M;
        minimum = 0;
        unordered_map<int, int> d;
        int c[300][300];
        for (int i = 0; i != N; ++i)
        {
            for (int val, j = 0; j != M; ++j)
            {
                cin >> val;
                c[i][j] = val;
            }

            int increment = MAXVAL;
            int optimalBuyDay;
            int indexOptimalElement;

            int taxIncrement;

            // Try to find minimum increment on price (tax + c[i][j] wise)
            for(int a = 0; a <= i; ++a)
            {
                // find minlocal row-wise
                int minLocal = MAXVAL;
                int minLocalPos;
                for (int it = 0; it != M; ++it)
                {
                    if (c[a][it] < minLocal)
                    {
                        minLocal = c[a][it];
                        minLocalPos = it;
                    }
                }
                taxIncrement = pow(d[a] + 1, 2) - pow(d[a], 2);
                if ((minLocal + taxIncrement) < increment)
                {
                    increment = (minLocal + taxIncrement);
                    optimalBuyDay = a;
                    indexOptimalElement = minLocalPos;
                }
            }
            minimum += c[optimalBuyDay][indexOptimalElement];

            // increase number of buy that day
            d[optimalBuyDay] += 1;

            // Replace the minimum now to become the most maximum so it wont be used later on
            c[optimalBuyDay][indexOptimalElement] = MAXVAL;
        }

        // End of test case N
        for (int z = 0; z != N; ++z)
        {
            minimum = minimum + (d[z] * d[z]);
        }
        cout << "Case #" << x + 1 << ": " << minimum << endl;
    }
}
