#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";

    // Line 9 and Line 10 if compiled will give error
    //std::cout << /* "*/" */;
    //std::cout << /* "*/" /* "/*" */;
}
