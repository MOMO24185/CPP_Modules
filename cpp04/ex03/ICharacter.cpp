#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(ICharacter const &iCharacter)
{
	*this = iCharacter;
	std::cout << "ICharacter copy constructor called" << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter destructor called" << std::endl;
}

ICharacter &ICharacter::operator=(ICharacter const &iCharacter)
{
	(void)iCharacter;
	std::cout << "ICharacter assignation operator called" << std::endl;
	return *this;
}