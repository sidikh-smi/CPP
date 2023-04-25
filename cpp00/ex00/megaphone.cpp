#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    int i = 1;
    char    uppercase;
    if (argc >= 2)
    {
        while (argv[i])
        {
            int j = 0;
            while (argv[i][j])
            {
                uppercase = toupper(argv[i][j]);
                std::cout << uppercase;
                j++;
            }
            std::cout << " ";
            i++;
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
