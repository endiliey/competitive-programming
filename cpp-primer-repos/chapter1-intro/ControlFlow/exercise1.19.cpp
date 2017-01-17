#include <iostream>

int main()
{
    std::cout << "Please enter two integers" << std::endl;
    int v1,v2;
    std::cin >> v1 >> v2;
    if (v1 > v2)
    {
        for(int i = v2; i <= v1; i++)
        {
            std::cout << i << std::endl;
        }
    }
    else
    {
        for(int i = v1; i <= v2; i++)
        {
            std::cout << i << std::endl;
        }
    }
}
