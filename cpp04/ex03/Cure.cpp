#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(Cure const &obj) : AMateria(obj)
{
	std::cout << "Cure Copy constructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &obj)
{
	std::cout << "Cure Assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
