/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:43:09 by melshafi          #+#    #+#             */
/*   Updated: 2024/11/06 10:43:10 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "animal.hpp"
# include "brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const& dog);
		virtual ~Dog();
		Dog& operator=(Dog const& dog);
		void makeSound() const;
	private:
		Brain* brain;
};

#endif