#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &src)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}