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