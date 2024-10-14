/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:47:28 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/14 11:47:29 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(5), Fixed(5));
	Point c(Fixed(10), Fixed(0));
	Point hit(Fixed(2), Fixed(1));

	if (bsp(a, b, c, hit))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
	return 0;
}
