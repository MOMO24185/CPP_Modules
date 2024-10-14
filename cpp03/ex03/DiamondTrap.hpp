/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:46:49 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/14 14:15:15 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const &obj);
		DiamondTrap(std::string const &name);
		~DiamondTrap();
		DiamondTrap &operator=(DiamondTrap const &obj);

		void attack(std::string const & target);
		void whoAmI(void);
	private:
		std::string name;
};

#endif
