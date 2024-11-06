/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:34:32 by melshafi          #+#    #+#             */
/*   Updated: 2024/11/06 10:42:56 by melshafi         ###   ########.fr       */
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
		std::string const &getIdea(int index) const;
		void setIdea(int index, std::string idea);
	private:
		std::string ideas[100];
};

#endif
