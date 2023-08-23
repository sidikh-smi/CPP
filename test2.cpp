#include <iostream>
#include <stack>
#include <deque>
#include <vector>


// template<typename T>
// class MutantStack : public std::stack<T>
// {
//     public:
//     typedef typename std::stack<T>::container_type::iterator iterator;
//     iterator begin()
//     {
//         return(iterator(this->c.begin()));
//     }
//     iterator end()
//     {
//         return(iterator(this->c.end()));
//     }
// };

// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     // std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     // std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);

//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     std::cout << "First: " << *it << std::endl;
//     ++it;
//     std::cout << "Second: " << *it << std::endl;
//     --it;
//     std::cout << "Third: " << *it << std::endl;
//     while (it != ite)
//     {
//     std::cout << *it << std::endl;
//     ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }

// int main()
// {
//     std::vector<int> s;

//     s.push_back(5);
//     s.push_back(50);
//     s.push_back(500);
//     s.push_back(5000);
//     s.push_back(1000);
//     std::vector<int>::iterator it = s.begin() + 4;
//     std::vector<int>::iterator its = s.end();
//     // while(it != its)
//     std::cout << *it << std::endl;
// }


int main()
{
    std::vector<std::pair<unsigned int, unsigned int>> pairV;

    pairV.push_back(std::make_pair(1, 5));
    std::cout << "1  = " << pairV[0].first << std::endl;
}