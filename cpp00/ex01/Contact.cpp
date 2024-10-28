/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:15:43 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/21 14:02:06 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Prompts.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <string>

const std::string Contact::INPUTS[] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret",
};

const int Contact::INPUT_COUNT = sizeof(Contact::INPUTS) / sizeof(std::string);

Contact::Contact(void)
{
	;
}

void Contact::set_contact_ptrs(std::string *contact_details[])
{
	contact_details[0] = &(this->first_name);
	contact_details[1] = &(this->last_name);
	contact_details[2] = &(this->nickname);
	contact_details[3] = &(this->phone_number);
	contact_details[4] = &(this->darkest_secret);
}



Contact Contact::creator(void)
{
	Contact contact;
	std::string *contact_details[INPUT_COUNT];
	contact.set_contact_ptrs(contact_details);

	for (int i = 0; i < Contact::INPUT_COUNT; i++)
	{
		std::string input = Contact::INPUTS[i];

		while (1)
		{
			std::cout << ASK_FOR_CONTACT_INFO << input << ": ";

			std::cin >> *contact_details[i];
			if (i == 3 && !Utilities::is_digit(*contact_details[i]))
				std::cout << *contact_details[i] << ": " << NUMERIC_VALUES_ONLY << std::endl;
			else if (i == 3 && Utilities::is_digit(*contact_details[i]) && contact_details[i]->length() > 15)
				std::cout << *contact_details[i] << ": " << PHONE_NUMBER_LENGTH << std::endl;
			else if (i == 3 && Utilities::is_digit(*contact_details[i]))
				break ;
			else if (i != 3 && !Utilities::is_alpha(*contact_details[i]))
				std::cout << *contact_details[i] << ": " << ALPHA_VALUES_ONLY << std::endl;
			else if (i != 3 && Utilities::is_alpha(*contact_details[i]))
			 	break ;
		}

		std::cout << std::endl;
	}
	return (contact);
}

std::string Contact::getFirstName()
{
	return this->first_name;
}

std::string Contact::getLastName()
{
	return this->last_name;
}

std::string Contact::getNickname()
{
	return this->nickname;
}
