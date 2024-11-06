/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:34:34 by melshafi          #+#    #+#             */
/*   Updated: 2024/11/06 10:42:51 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const& brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const& brain)
{
	std::cout << "Brain assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}

std::string const &Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		std::cout << "Index out of bound" << std::endl;
	else
		return this->ideas[index];
	return this->ideas[0];
}

void Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index >= 100)
		std::cout << "Index out of bound" << std::endl;
	else
		this->ideas[index] = idea;
}