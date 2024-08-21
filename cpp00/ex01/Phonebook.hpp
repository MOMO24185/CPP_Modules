#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include "Prompts.hpp"

class Phonebook
{
	private:
		Contact	contacts[MAX_CONTACTS];
		int		added;
		bool	overloaded;

	public:
		Phonebook();

		bool isFull(void);
		bool isEmpty(void);
		int size(void);
		bool add(void);
		void displayContact(Contact contact);
		void displayAll(void);
		void interactiveSearch(void);
};

#endif