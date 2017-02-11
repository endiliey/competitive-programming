#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::cin; using std::endl; using std::vector;

int main()
{
    vector<int> answers(6);
    int a, b, c;
    cin >> a >> b >> c;

    answers[0] = a + b + c;
    answers[1] = a * b * c;
    answers[2] = a * b + c;
    answers[3] = a + b * c;
    answers[4] = (a + b) * c;
    answers[5] = a * (b + c);

    std::sort(answers.begin(), answers.end());
    cout << answers[5];
    return 0;
}
