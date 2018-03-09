#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{
    cin.tie(0);
    int S, B;
    while(cin >> S >> B) {
        if (S == 0 && B == 0) break;

		// Fill soldier
		vi left(S + 2, 0);
		vi right(S + 2, 0);
		for(int i = 1; i <= S; ++i) {
			left[i] = (i - 1);
			right[i] = (i + 1) % (S + 1);
		}

		// Loss report
        for(int i = 0; i < B; ++i) {
            int L, R;
            cin >> L >> R;
			
			string lleft = "*";
			if (left[L] != 0) {
				right[left[L]] = right[R];
				left[right[R]] = left[L];
				lleft = std::to_string(left[L]);
			}
			
			string lright = "*";
			if (right[R] != 0) {
				left[right[R]] = left[L];
				right[left[L]] = right[R];
				lright = std::to_string(right[R]);
			}
			
			cout << lleft << " " << lright << "\n";
        }
		cout << "-\n";
    }
    return 0;
}
