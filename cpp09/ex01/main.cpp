#include <iostream>
#include <stack>

void    ft_operators(std::stack<int> &stack, char a)
{
    if(a == '+')
    {
        // std::cout << "b =  " << stack.top() << std::endl;
        int b = stack.top();
        stack.pop();
        // std::cout << "a = " << stack.top() << std::endl;
        int a = stack.top();
        stack.pop();
        stack.push(b + a);
        // std::cout <<  "result  = " << stack.top() << std::endl;
    }
    else if(a == '-')
    {
        // std::cout << "b =  " << stack.top() << std::endl;
        int b = stack.top();
        stack.pop();
        // std::cout << "a = " << stack.top() << std::endl;
        int a = stack.top();
        stack.pop();
        stack.push(a - b);
        // std::cout <<  "result  = " << stack.top() << std::endl;
    }
    else if(a == '*')
    {
        // std::cout << "b =  " << stack.top() << std::endl;
        int b = stack.top();
        stack.pop();
        // std::cout << "a = " << stack.top() << std::endl;
        int a = stack.top();
        stack.pop();
        stack.push(b * a);
        // std::cout <<  "result  = " << stack.top() << std::endl;
    }
    else if(a == '/')
    {
        // std::cout << "b =  " << stack.top() << std::endl;
        int b = stack.top();
        stack.pop();
        // std::cout << "a = " << stack.top() << std::endl;
        int a = stack.top();
        stack.pop();
        stack.push(b / a);
        // std::cout <<  "result  = " << stack.top() << std::endl;
    }
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "error with the number of arguemnt\n";
        return(1);
    }
    else
    {
        int i = 0;
        int digit = 0;
        int op = 0;
        while (argv[1][i])
        {
            if(std::isdigit(argv[1][i]))
            {
                i++;
                digit++;
                continue;
            }
            else if (argv[1][i] == ' ')
            {
                i++;
                continue;
            }
            else if (argv[1][i] != '+' && argv[1][i] != '-' && argv[1][i] != '*' && argv[1][i] != '/')
            {
                std::cout << "error with operator\n";
                return 1;
            }
            i++;
            op++;
        }
        if(digit - op != 1)
        {
            std::cout << "error with difference between digit and operator" << std::endl;
            return 1;
        }
        std::stack<int> stack;
        i = 0;
        while (argv[1][i])
        {
            if(std::isdigit(argv[1][i]))
            {
                argv[1][i] -= 48;
                stack.push(argv[1][i]);
                i++;
                continue;
            }
            else if(argv[1][i] == '+' || argv[1][i] == '-' || argv[1][i] == '*' || argv[1][i] == '/')
            {
                if(stack.size() >= 2)
                    ft_operators(stack, argv[1][i]);
                else
                {
                    std::cout << "error" << std::endl;
                    return 1;
                }
            }
            i++;
        }
        // std::cout << stack.size() << std::endl;
        std::cout << stack.top() << std::endl;
    }
}