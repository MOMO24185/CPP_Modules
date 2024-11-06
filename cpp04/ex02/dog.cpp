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
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog& Dog::operator=(Dog const& dog)
{
	std::cout << "Dog assignation operator called" << std::endl;
	Animal::operator=(dog);
	this->brain = new Brain(*dog.brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof" << std::endl;
}