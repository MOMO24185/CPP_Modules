/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:49:24 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/14 14:10:33 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap const &obj);
		FragTrap(std::string const &name);
		~FragTrap();
		FragTrap &operator=(FragTrap const &obj);

		void attack(std::string const & target);
		void highFivesGuys(void);
};

#endif
