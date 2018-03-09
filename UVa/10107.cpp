#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int N;

    while(cin >> N) {
        v.push_back(N);
        sort(v.begin(), v.end());
        int mid = (int) v.size() / 2;
        if ((int) v.size() & 1 ) cout << v[mid];
        else cout << (v[mid] + v[mid - 1]) / 2;
        cout << "\n";
    }

    return 0;
}
