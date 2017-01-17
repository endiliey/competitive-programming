#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item;
    std::cout << "ISBN <no of copies sold> <sales price>" << std::endl;
    while (std::cin >> item)
    {
        std::cout << "ISBN <no of copies sold> <sales price>" << std::endl;
        std::cout << item << std::endl;
    }
    return 0;
}
