/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:46:52 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/14 11:46:53 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int value;
		static const int fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(Fixed& other);
		Fixed& operator=(Fixed& other);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
};

#endif
