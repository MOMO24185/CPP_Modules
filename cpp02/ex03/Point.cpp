/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:47:31 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/28 11:28:03 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
	std::cout << "Default point constructor called" << std::endl;
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y)
{
	std::cout << "Point constructor called" << std::endl;
}

Point::Point(const Point& other) : x(other.x), y(other.y)
{
	std::cout << "Copy point constructor called" << std::endl;
}

Point::~Point()
{
	std::cout << "Point destructor called" << std::endl;
}

Point& Point::operator=(const Point& other)
{
	if (this != &other)
	{
		std::cout << "WARNING!!! Copy assignment operator cannot copy const Fixed values." << std::endl;
	}
	return *this;
}

Fixed Point::getX(void) const
{
	return x;
}

Fixed Point::getY(void) const
{
	return y;
}
