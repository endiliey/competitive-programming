#include <iostream>
#include <stack>

using std::cout; using std::cin; using std::endl;

int main()
{
    int n, group = 0;
    cin >> n;
    std::stack<int> s;
    for (int i = 0, val; i != n; ++i)
    {
        cin >> val;
        if (s.empty() || s.top() != val)
        {
            group++;
            if (!s.empty())
                s.pop();
            s.push(val);
        }
    }
    cout << group;
    return 0;
}
