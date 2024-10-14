/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:46:30 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/14 13:28:32 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap claptrap;
	ClapTrap claptrap2("Claptrap2");
	ClapTrap claptrap3("claptrap3");

	claptrap.attack("Diglet");
	claptrap2.attack("Pikachu");
	claptrap3.attack("Bulbasaur");
	claptrap.takeDamage(10);
	claptrap2.takeDamage(2);
	claptrap3.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap2.beRepaired(10);
	claptrap3.beRepaired(3);
	claptrap2.attack("Pikachu");
	claptrap3.attack("Bulbasaur");
	return 0;
}
