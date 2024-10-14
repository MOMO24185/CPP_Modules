/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:46:50 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/14 14:35:57 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap("Diamond_Yapper_clap_name")
{
	this->name = "Diamond_Yapping";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(), ScavTrap(), FragTrap(name + "_clap_name")
{
	this->name = name;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap Parametric Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
	ClapTrap::operator=(obj);
	ScavTrap::operator=(obj);
	FragTrap::operator=(obj);
	std::cout << "DiamondTrap Assignation Operator called" << std::endl;
	return *this;
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
