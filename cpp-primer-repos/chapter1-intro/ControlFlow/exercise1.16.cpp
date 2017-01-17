#include <iostream>

int main()
{
    std::cout << "Please enter integers, type any string to quit" << std::endl;
    int sum = 0;
    int value;
    while (std::cin >> value)
    {
        sum += value;
    }

    std::cout << "The sum is " << sum << std::endl;
}
