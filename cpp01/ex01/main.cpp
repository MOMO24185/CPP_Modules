/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:20:32 by melshafi          #+#    #+#             */
/*   Updated: 2024/08/21 15:08:10 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(4, "Horde");
	for (int i = 0; i < 4; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
