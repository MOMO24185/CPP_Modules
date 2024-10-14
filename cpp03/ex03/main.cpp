/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:46:30 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/14 14:29:30 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	ClapTrap claptrap3("claptrap3");
	ScavTrap scavtrap3("Scavtrap3");
	FragTrap fragtrap3("FragTrap3");

	DiamondTrap diamondtrap("DiamondTrap");

	claptrap3.attack("Bulbasaur");
	claptrap3.takeDamage(5);
	claptrap3.beRepaired(3);
	claptrap3.attack("Bulbasaur");

	scavtrap3.attack("Bulbasaur");
	scavtrap3.guardGate();

	fragtrap3.attack("Bulbasaur");
	fragtrap3.highFivesGuys();

	diamondtrap.attack("Bulbasaur");
	diamondtrap.whoAmI();

	return 0;
}
