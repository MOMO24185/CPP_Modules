#include <iostream>
#include <string>
#include <sstream>

#include "Phonebook.hpp"
#include "Prompts.hpp"
#include "Utilities.hpp"
#include "TableDisplay.hpp"

Phonebook::Phonebook(void)
{
	this->added = 0;
	this->overloaded = false;
}

bool Phonebook::isFull(void)
{
	return (this->size() == MAX_CONTACTS);
}

int Phonebook::size(void)
{
	if (this->overloaded)
		return (MAX_CONTACTS);
	return (this->added);
}

bool Phonebook::isEmpty(void)
{
	return (this->size() == 0);
}

bool Phonebook::add(void)
{
	Contact contact;
	int i = added;
	if (this->isFull())
	{
		if (this->added == MAX_CONTACTS)
		{
			this->added = 0;
			this->overloaded = true;
		}
		contact = Contact::creator();
		this->contacts[this->added] = contact;
		std::cout << PHONEBOOK_ADD_OVERLOAD << this->added << PHONEBOOK_ADD_OVERLOAD_CONT << std::endl;
		this->added++;
		return (false);
	}
	contact = Contact::creator();
	this->contacts[i] = contact;
	i++;
	this->added++;
	return (true);
}

void Phonebook::displayContact(Contact contact)
{
	std::string *contact_details[Contact::INPUT_COUNT];
	contact.set_contact_ptrs(contact_details);

	for (int i = 0; i < Contact::INPUT_COUNT; i++)
	{
		std::string input = Contact::INPUTS[i];
		std::string *field = contact_details[i];

		std::cout << input << DISPLAY_INFO_SEPERATOR << *field << std::endl;
	}
}

void Phonebook::displayAll(void)
{	
	for (int index = 0; index < this->size(); index++)
	{
		Contact current = this->contacts[index];

		std::stringstream indexStream;
		indexStream << index;

		TableDisplay::displayColumnEntry(indexStream.str());
		TableDisplay::displayBorder(false);

		TableDisplay::displayColumnEntry(current.getFirstName());
		TableDisplay::displayBorder(false);

		TableDisplay::displayColumnEntry(current.getLastName());
		TableDisplay::displayBorder(false);

		TableDisplay::displayColumnEntry(current.getNickname());
		TableDisplay::displayBorder(true);
	}
}

void Phonebook::interactiveSearch(void)
{
	std::string input;
	int index = -1;

	std::cout << ASK_FOR_CONTACT_INDEX;
	std::cin >> input;
	int	atoi_bool = Utilities::positive_atoi(input.c_str(), &index);
	
	if (!atoi_bool || index < 0 || index >= MAX_CONTACTS || index >= this->size())
	{
		if (std::cin.eof())
			std::cout << std::endl;
		else
		{
			if (atoi_bool && !input.empty() && (index < 0 || index >= MAX_CONTACTS || index >= this->size()))
				std::cout << CONTACT_INDEX_INVALID << std::endl;
			else
				std::cout << CONTACT_INDEX_SYNTAX_ERR << std::endl;
		}
		return ;
	}

	this->displayContact(this->contacts[index]);
}