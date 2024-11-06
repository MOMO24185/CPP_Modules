/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:42:11 by melshafi          #+#    #+#             */
/*   Updated: 2024/11/06 11:31:20 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal param constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &animal) : type(animal.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->type = animal.type;
	return *this;
}

std::string Animal::getType() const
{
	std::cout << "getType called from animal" << std::endl;
	return type;
}

void Animal::makeSound() const
{
	std::cout << "Animal doesnt make any sound" << std::endl;
}
