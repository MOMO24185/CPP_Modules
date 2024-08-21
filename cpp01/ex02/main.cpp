/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:16:10 by melshafi          #+#    #+#             */
/*   Updated: 2024/08/21 15:18:13 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of the string: " << &str << std::endl;
	std::cout << "Address of the string: " << stringPTR << std::endl;
	std::cout << "Address of the string: " << &stringREF << std::endl;

	std::cout << "Value of the string: " << str << std::endl;
	std::cout << "Value of the string: " << *stringPTR << std::endl;
	std::cout << "Value of the string: " << stringREF << std::endl;
	return (0);
}
