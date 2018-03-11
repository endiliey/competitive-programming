#include<bits/stdc++.h>
#define PB push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	int n;
	cin >> n;
	if (n == 1) {
		cout << "1";
	}
	else if (n == 2 || n == 3) {
		cout << "NO SOLUTION";
	}
	else {
		int foo = n - 1;
		while(foo >= 1) {
			cout << foo << " ";
			foo -= 2;
		}
		foo = n;
		while(foo >= 1) {
			cout << foo << " ";
			foo -= 2;
		}
	}
    return 0;
}
