/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:46:50 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/30 10:46:02 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	ClapTrap::name = "Diamond_Yapper_clap_name";
	this->name = "Diamond_Yapper";
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap Default Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(), ScavTrap(), FragTrap()
{
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap Parametric Constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
	ClapTrap::operator=(obj);
	ScavTrap::operator=(obj);
	FragTrap::operator=(obj);
	std::cout << "DiamondTrap = Operator" << std::endl;
	this->name = obj.name;
	ClapTrap::name = obj.name + "_clap_name";
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
