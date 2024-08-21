/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:15:53 by melshafi          #+#    #+#             */
/*   Updated: 2024/08/21 13:15:54 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
