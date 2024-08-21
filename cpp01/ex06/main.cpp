/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:19:36 by melshafi          #+#    #+#             */
/*   Updated: 2024/08/21 17:00:15 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int	strCmp(char* str1, const char* str2)
{
	int	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	if (str1[i] || str2[i])
		return (0);
	return (1);
}

int	check_level(char* str)
{
	const char *levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (strCmp(str, levels[0]))
		return (1);
	if (strCmp(str, levels[1]))
		return (2);
	if (strCmp(str, levels[2]))
		return (3);
	if (strCmp(str, levels[3]))
		return (4);
	return (0);
}

int	main(int ac, char **av)
{
	Harl		harl;

	if (ac != 2)
		return ((std::cout << "Usage: ./harl [DEBUG/INFO/WARNING/ERROR]" << std::endl), 1);
	switch (check_level(av[1]))
	{
	case 1:
		harl.complain("debug");
		break;
	case 2:
		harl.complain("info");
		break;
	case 3:
		harl.complain("warning");
		break;
	case 4:
		harl.complain("error");
		break;
	default:
		std::cout << "Invalid level" << std::endl;
		break;
	}
	return (0);
}
