#include <bits/stdc++.h>
#define ll long long
#define all(c) c.begin(), c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container), element) != container.end())
using namespace std;

int main()
{
	string p1, p2;
	cin >> p1 >> p2;
	cout << p1 << " " <<  p2 << "\n";
	string input, input2;
	vector<string> person;
	person.push_back(p1);
	person.push_back(p2);
	int n;
	cin >> n;
	for (int i = 0; i != n; ++i)
	{
		cin >> input >> input2;
		replace (all(person), input, input2);
		cout << person[0] << " " <<  person[1] << endl;
	}
	return 0;
}
