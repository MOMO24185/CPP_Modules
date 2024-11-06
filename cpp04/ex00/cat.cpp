/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:42:19 by melshafi          #+#    #+#             */
/*   Updated: 2024/11/06 10:42:20 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const& cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(Cat const& cat)
{
	std::cout << "Cat assignation operator called" << std::endl;
	Animal::operator=(cat);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow meow meow meow (Sad Billy Eilish Song tune)" << std::endl;
}
