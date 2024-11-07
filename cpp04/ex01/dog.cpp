/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:43:06 by melshafi          #+#    #+#             */
/*   Updated: 2024/11/06 11:27:03 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog const& dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*dog.brain);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(Dog const& dog)
{
	if (this == &dog)
		return *this;
	std::cout << "Dog assignation operator called" << std::endl;
	Animal::operator=(dog);

	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*dog.brain);
	this->type = dog.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof" << std::endl;
}

void Dog::setIdea(int index, std::string idea)
{
	this->brain->setIdea(index, idea);
}

std::string const &Dog::getIdea(int index) const
{
	return this->brain->getIdea(index);
}