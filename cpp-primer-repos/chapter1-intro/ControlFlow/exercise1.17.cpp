#include <iostream>

int main()
{
    int currVal = 0;
    int val = 0;
    std::cout << "Please enter many integers and press ctrl+z to quit" << std::endl;
    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == currVal)
            {
                ++cnt;
            }
            else
            {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}

// If all inputs are equal, it will generate more than 1 occurance
// If there are no duplicated values, every number will be printed occured 1 time
