#include<bits/stdc++.h>
using namespace std;

struct subject {
    int a, b;
    bool operator<(const subject& rhs) const {
        if (a == rhs.a) return b < rhs.b;
        else return a < rhs.a;
    }
    subject(int x = 0, int y = 0) {
        a = x;
        b = y;
    }

};

vector<subject> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
       int a, b;
       cin >> a >> b;
       v.push_back(subject(a, b));
    }
    sort(v.begin(), v.end());
    
    int day = 0; // current
    for(int i = 0; i < n; ++i) {
        if (day > v[i].b) {
            day = max(day, v[i].a);
        }
        else {
            day = min(v[i].a, v[i].b);
        }
    }
    cout << day;
    return 0;
}
