/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:42:21 by melshafi          #+#    #+#             */
/*   Updated: 2024/11/06 10:42:22 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const& cat);
		virtual ~Cat();
		Cat& operator=(Cat const& cat);
		void makeSound() const;
};

#endif
