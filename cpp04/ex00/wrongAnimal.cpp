#include "wrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	type = wrongAnimal.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	std::cout << "WrongAnimal getType" << std::endl;
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}