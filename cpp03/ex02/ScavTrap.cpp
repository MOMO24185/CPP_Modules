/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:27:42 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/30 10:37:27 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->name = "ScavTrap";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap Default Constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap Copy Constructor" << std::endl;
	this->name = obj.name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap Parametric Constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	ClapTrap::operator=(obj);
	std::cout << "ScavTrap = Operator" << std::endl;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead." << std::endl;
		return ;
	}
	if (this->energy_points < 10)
	{
		std::cout << "ScavTrap " << this->name << " is out of energy." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points -= 1;
}
