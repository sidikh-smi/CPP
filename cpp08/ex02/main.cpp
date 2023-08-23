#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << mstack.top() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        ++it;
    }
    std::stack<int> s(mstack);
    s.push(10);
    std::cout << s.size() << std::endl;
    MutantStack<int> a(mstack);
    // MutantStack<int>::iterator it1 = a.begin();
    // MutantStack<int>::iterator it2 = a.end();
    // while (it1 != it2)
    // {
        // it1++;
    // }
    return 0;
}