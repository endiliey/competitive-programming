/*
 * Wrote output using separate statement
 * to print each operand
 *
*/

#include <iostream>

int main()
{
    std::cout << "Please enter 2 integer inputs, separated by a space" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The product of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2 << std::endl;
    return 0;
}
