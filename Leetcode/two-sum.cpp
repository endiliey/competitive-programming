/*
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 * You may assume that each input would have exactly one solution.
*/
#include <iostream>
#include <map>
#include <vector>
#include <iterator>

using std::vector; using std::cout; using std::cin; using std::endl;

vector<int> twoSum(vector<int> &nums, int target);

int main()
{
    vector<int> v1= {3, 0, 0, 0, 5};
    vector<int> v2 = twoSum(v1, 8);
    cout << "{ ";
    for (auto test : v2)
    {
        cout << test << " ";
    }
    cout << "}";
    return 0;
}

vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> pairSum;
    std::map<int,int> complement;

    auto it = 0;
    auto ending = nums.size();

    while (it < ending)
    {
        int value = nums[it];
        auto search = complement.find(value);
        if (search != complement.end())
        {
            pairSum.push_back(search->second);
            pairSum.push_back(it);
            return pairSum;
        }
        complement.insert(std::pair<int,int>((target - value), it));
        it++;
    }

    return pairSum;
}
