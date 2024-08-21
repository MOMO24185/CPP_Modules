/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:01:00 by melshafi          #+#    #+#             */
/*   Updated: 2024/08/21 16:11:52 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace(std::string &line, std::string s1, std::string s2)
{
	size_t pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return ((std::cout << "Usage: ./replace [filename] [s1] [s2]" << std::endl), 1);
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream file(filename);
	if (!file.is_open())
		return ((std::cout << "Error: could not open file" << std::endl), 1);
	std::string line;
	std::string new_filename = filename + ".replace";
	std::ofstream new_file(new_filename);
	if (!new_file.is_open())
		return ((std::cout << "Error: could not create new file" << std::endl), 1);
	while (std::getline(file, line))
	{
		replace(line, s1, s2);
		new_file << line << std::endl;
	}
	file.close();
	new_file.close();
	return 0;
}
