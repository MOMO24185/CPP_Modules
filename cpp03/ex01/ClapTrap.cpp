/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:46:27 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/14 13:28:08 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->name = "Yapping machine";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	this->name = src.name;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap Parameter Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=( const ClapTrap & src )
{
	this->name = src.name;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	return *this;
}

void ClapTrap::attack(std::string const & target)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
		return ;
	}
	if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	this->hit_points -= amount;
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
		return ;
	}
	if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
		return ;
	}
	if (this->hit_points + amount > 100)
	{
		std::cout << "ClapTrap " << this->name << " is repaired and at full health!" << std::endl;
		this->hit_points = 100;
		this->energy_points -= 1;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points of health!" << std::endl;
	this->hit_points += amount;
	this->energy_points -= 1;
}
