/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:15:45 by melshafi          #+#    #+#             */
/*   Updated: 2024/08/21 13:15:47 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:
		const static std::string INPUTS[];
		const static int INPUT_COUNT;

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		Contact(void);

		void set_contact_ptrs(std::string *contact_details[]);

		static Contact creator(void);

		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
};

#endif
