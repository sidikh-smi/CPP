#include <iostream>

int main()
{
    int i = clock();

    std::cout << "hello\n";
    std::cout << "hello\n";
    std::cout << "hello\n";
    std::cout << "hello\n";
    std::cout << "hello\n";
    int j = clock();

    std::cout << j - i << std::endl;
}