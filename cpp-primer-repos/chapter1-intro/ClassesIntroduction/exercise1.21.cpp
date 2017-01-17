#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cout << "Please enter two Sales_item objects that have the same ISBN" << std::endl;
    std::cin >> item1 >> item2;

    Sales_item item3 = item1 + item2;
    std::cout << item3 << std::endl;
}
