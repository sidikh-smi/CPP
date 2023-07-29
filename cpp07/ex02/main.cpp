#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
   
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
       // std::cout <<  "hello" << std::endl;
        numbers[i] = value;
        mirror[i] = value;
    }
    // // //SCOPE
    {
        Array<int> tmp(numbers);
        Array<int> test = tmp;
        // Array<int> t;
        // t  = numbers;
        // std::cout << "TMP" << std::endl;
    }
    
    Array<int> tmp(12);
    Array<int> test = tmp;
    Array<int> tma = tmp;
    Array<int> tm(30);
    Array<int> op = tm;
    // Array<int> test_3 = test_2;
    //system("leaks main");
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
       numbers[2] = 0;
        std::cout << "number[2] = " << numbers[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}