#include "sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error there must be Four parameters " << std::endl;
        return 1;
    }
    std::ifstream   input_filename(argv[1]);
    if (!input_filename.is_open())
    {
        std::cout << "Error the input file are not open!!! " << std::endl;
        return 1;
    }
    std::string output_file = std::string(argv[1]) + ".replace";
    std::ofstream output_filename(output_file);
    if (!output_filename.is_open())
    {
        std::cout << "Error the output file are not open!!! " << std::endl;
        return 1;
    }
}