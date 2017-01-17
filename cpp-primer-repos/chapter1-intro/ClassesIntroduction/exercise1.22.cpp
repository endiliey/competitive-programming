#include <iostream>
#include "Sales_item.h"


int main()
{
    Sales_item item;
    Sales_item itemSum;

    std::cout << "Please enter many transaction with same ISBN" << std::endl;
    std::cin >> itemSum;
    while (std::cin >> item)
    {
        std::cout << item << std::endl;
        itemSum = itemSum + item;
    }

    std::cout << "Final" << std::endl;
    std::cout << itemSum << std::endl;
}
