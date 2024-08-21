/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TableDisplay.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:15:57 by melshafi          #+#    #+#             */
/*   Updated: 2024/08/21 13:15:57 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>

#include "TableDisplay.hpp"

void TableDisplay::displayColumnEntry(std::string text)
{
	size_t length = text.length();

	if (length > 10)
	{
		text = text.substr(0, 9);
		text += '.';
	}

	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << text;
	std::cout << std::setfill(' ') << std::setw(0);
}

void TableDisplay::displayBorder(bool end)
{
	if (end)
		std::cout << std::endl;
	else
		std::cout << '|';
}
