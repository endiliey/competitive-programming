#include <iostream>
#include <map>
using std::cout; using std::cin; using std::endl;

int main()
{
    int n;
    cin >> n;
    std::map<int, int> myFriend;

    for (int i = 1, val; i <= n; ++i)
    {
        cin >> val;
        myFriend[val] = i;
    }

    for (int j = 1; j <= n; ++j)
    {
        cout << myFriend[j] << " ";
    }
    return 0;

}
