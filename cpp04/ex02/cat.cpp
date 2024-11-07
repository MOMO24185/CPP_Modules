/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:42:58 by melshafi          #+#    #+#             */
/*   Updated: 2024/11/06 11:27:52 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Cat const& cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*cat.brain);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(Cat const& cat)
{
	if (this == &cat)
		return *this;
	std::cout << "Cat assignation operator called" << std::endl;
	Animal::operator=(cat);

	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*cat.brain);
	this->type = cat.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow meow meow meow (Sad Billy Eilish Song tune)" << std::endl;
}

void Cat::setIdea(int index, std::string idea)
{
	this->brain->setIdea(index, idea);
}

std::string const &Cat::getIdea(int index) const
{
	return this->brain->getIdea(index);
}