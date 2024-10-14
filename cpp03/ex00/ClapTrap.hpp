/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:46:26 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/14 13:28:17 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &src);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap & operator=( const ClapTrap & src );
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
};

#endif
