#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource() 
{
	std::cout << "IMateriaSource constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &src) 
{
	std::cout << "IMateriaSource copy constructor called" << std::endl;
	*this = src;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &src) 
{
	std::cout << "IMateriaSource assignation operator called" << std::endl;
	(void)src;
	return (*this);
}
