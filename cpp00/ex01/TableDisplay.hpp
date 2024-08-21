/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TableDisplay.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:15:58 by melshafi          #+#    #+#             */
/*   Updated: 2024/08/21 13:15:59 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TABLEDISPLAY_HPP
# define TABLEDISPLAY_HPP

# include <string>

class TableDisplay
{
	public:
		static void displayColumnEntry(std::string text);
		static void displayBorder(bool end);
};

#endif
