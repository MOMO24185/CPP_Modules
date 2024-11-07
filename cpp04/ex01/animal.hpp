/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:42:45 by melshafi          #+#    #+#             */
/*   Updated: 2024/11/06 10:42:46 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		std::string getType() const;
		virtual void makeSound() const;
		virtual void setIdea(int index, std::string idea);
		virtual std::string const &getIdea(int index) const;
};

#endif
