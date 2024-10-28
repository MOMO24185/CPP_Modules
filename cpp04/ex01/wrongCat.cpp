#include "wrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& wrongCat) : WrongAnimal(wrongCat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const& wrongCat)
{
	WrongAnimal::operator=(wrongCat);
	std::cout << "WrongCat assignation operator called" << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}