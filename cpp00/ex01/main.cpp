/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:15:48 by melshafi          #+#    #+#             */
/*   Updated: 2024/08/21 13:15:49 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Phonebook.hpp"
#include "Prompts.hpp"

int main(void)
{
	std::string input;
	Phonebook phonebook;

	while (true)
	{
		std::cout << PROGRAM_PROMPT;
		std::cin >> input;

		if (std::cin.eof())
			std::cout << std::endl;

		if (input == "ADD")
		{
			if (phonebook.add())
				std::cout << PHONEBOOK_ADD_SUCCESS << std::endl;
		}
		else if (input == "SEARCH")
		{
			if (!phonebook.isEmpty())
			{
				phonebook.displayAll();
				phonebook.interactiveSearch();
			}
			else
				std::cout << PHONEBOOK_EMPTY << std::endl;
		}
		else if (input == "EXIT")
			break;
		else
		 	std::cout << INVALID_COMMAND << std::endl;
	}

	return (0);
}
