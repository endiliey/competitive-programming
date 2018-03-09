#include<bits/stdc++.h>
using namespace std;

vector<char> v;
string a, b;
stack<char> s;

void dfs(int x, int y){
    // if alrd found the answer
    if (x == (int) a.size() && y == (int) b.size()){
        for (int i = 0; i < (int) v.size(); ++i) {
            cout << v[i];
            if (i != (int) v.size() - 1) cout << " ";
        }
        cout << "\n";
        return;
    }
    // push if possible
    if (x < (int) a.size()) {
        v.push_back('i');
        s.push(a[x]);
        dfs(x + 1, y);
        s.pop();
        v.pop_back();
    }
    // pop if possible or when it's alrd matching
    if (!s.empty() && y < (int) b.size() && s.top() == b[y]) {
        v.push_back('o');
        s.pop();
        dfs(x, y + 1);
        s.push(b[y]);
        v.pop_back();
    }
}

int main(){
    while(cin >> a >> b) {
        v.clear();
        cout << "[\n";
        if (a.size() == b.size()) dfs(0, 0);
        cout << "]\n";
    }

}
