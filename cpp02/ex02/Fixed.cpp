/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:47:14 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/14 11:47:15 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		value = other.getRawBits();
	return *this;
}

float Fixed::operator+(const Fixed& other) const
{
	return toFloat() + other.toFloat();
}

float Fixed::operator-(const Fixed& other) const
{
	return toFloat() - other.toFloat();
}

float Fixed::operator*(const Fixed& other) const
{
	return toFloat() * other.toFloat();
}

float Fixed::operator/(const Fixed& other) const
{
	return toFloat() / other.toFloat();
}

Fixed Fixed::operator++(void)
{
	value++;
	return *this;
}

Fixed Fixed::operator--(void)
{
	value--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

bool Fixed::operator>(const Fixed& other) const
{
	return value > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other) const
{
	return value < other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) const
{
	return value >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) const
{
	return value <= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) const
{
	return value == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) const
{
	return value != other.getRawBits();
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return a > b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return a < b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return a > b ? a : b;
}

float Fixed::toFloat() const
{
	return (float)value / (1 << fractionalBits);
}

int Fixed::toInt() const
{
	return value >> fractionalBits;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
