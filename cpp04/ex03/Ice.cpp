#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src)
{
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &src)
{
	std::cout << "Ice Assignation operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}