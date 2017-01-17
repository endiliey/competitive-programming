#include <iostream>

int main()
{

    // Exercise 1.9
    int sum = 0;
    for(int i = 50; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << sum << std::endl;

    // Exercise 1.10
    sum = 0;
    for (int i = 10; i >= 0; i--)
    {
        sum += i;
    }
    std::cout << sum << std::endl;

    // Exercise 1.11
    int v1,v2;
    std::cout << "Please enter two integers (first number is lower)" << std::endl;
    std::cin >> v1 >> v2;

    for (int i = v1; i <= v2; i++)
    {
        std::cout << i << std::endl;
    }

}
