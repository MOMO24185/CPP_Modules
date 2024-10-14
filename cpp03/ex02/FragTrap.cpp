/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:49:22 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/14 13:44:07 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "Yapping machine with grenades";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap Default Constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap(obj)
{
	std::cout << "FragTrap Copy Constructor" << std::endl;
}

FragTrap::FragTrap(std::string const &name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap Parametric Constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
	ClapTrap::operator=(obj);
	std::cout << "FragTrap Assignation Operator" << std::endl;
	return *this;
}

void FragTrap::attack(std::string const & target)
{
	if (this->hit_points <= 0)
	{
		std::cout << "FragTrap " << this->name << " is dead." << std::endl;
		return ;
	}
	if (this->energy_points <= 0)
	{
		std::cout << "FragTrap " << this->name << " is out of energy." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points -= 1;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " is asking for a high five." << std::endl;
}


