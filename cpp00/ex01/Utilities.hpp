/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utilities.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:16:26 by melshafi          #+#    #+#             */
/*   Updated: 2024/08/21 13:16:27 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITIES_HPP
# define UTILITIES_HPP

# include <climits>
#include <string>

class Utilities
{
	public:
			static bool is_whitespace(char c);
			static bool is_alpha(std::string str);
			static bool is_digit(std::string str);
			static bool positive_atoi(const char *str, int *out);
};

#endif
