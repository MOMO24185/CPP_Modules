/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:20:32 by melshafi          #+#    #+#             */
/*   Updated: 2024/08/21 14:43:54 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int main(void)
{
	Zombie zombie = Zombie("Bob");
	Zombie zombie2 = Zombie();
	randomChump("Billy");
	Zombie *newZ = newZombie("Shawn");
	zombie.announce();
	zombie2.announce();
	newZ->announce();
	delete newZ;
	return (0);
}
