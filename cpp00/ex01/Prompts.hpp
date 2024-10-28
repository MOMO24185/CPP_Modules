/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Prompts.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:15:55 by melshafi          #+#    #+#             */
/*   Updated: 2024/10/21 14:03:55 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROMPTS_HPP
# define PROMPTS_HPP

# define MAX_CONTACTS 8
# define ASK_FOR_CONTACT_INFO "Please enter Contacts "
# define ASK_FOR_CONTACT_INDEX "Please enter Contacts Phonebook index: "
# define CONTACT_INDEX_INVALID "Invalid index. Please enter a valid index."
# define CONTACT_INDEX_SYNTAX_ERR "Syntax error. Please enter a valid index."
# define DISPLAY_INFO_SEPERATOR ": "
# define PROGRAM_PROMPT "Please choose one of the available options: (ADD, SEARCH, EXIT): "
# define PHONEBOOK_ADD_SUCCESS "The new contact has been added successfully"
# define PHONEBOOK_ADD_OVERLOAD "The new contact has been added by replacing contact in index "
# define PHONEBOOK_ADD_OVERLOAD_CONT " due to the Phonebook reaching max capacity"
# define PHONEBOOK_EMPTY "The Phonebook is empty, add new contacts to view them"
# define NUMERIC_VALUES_ONLY "This value takes in Numerical values only"
# define PHONE_NUMBER_LENGTH "Phone number should be less than 16 characters"
# define ALPHA_VALUES_ONLY "This value takes in Alphabet values only!"
# define INVALID_COMMAND "This is not a valid command!"

#endif
