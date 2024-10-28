/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:34:32 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/28 16:22:17 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const& brain);
		~Brain();
		Brain& operator=(Brain const& brain);
	private:
		std::string ideas[100];
};

#endif
