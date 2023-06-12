#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource Constructor Called" << std::endl;

}

MateriaSource::MateriaSource(const MateriaSource& s)
{
    std::cout << "MateriaSource Copy Constructor Called" << std::endl;

}

MateriaSource MateriaSource::operator=(const MateriaSource& src)
{
    if (this != &src)

    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor Called" << std::endl;
}

void    MateriaSource::learnMateria(AMateria* s)
{

}

AMateria* MateriaSource::createMateria(std::string const &t)
{
    
}