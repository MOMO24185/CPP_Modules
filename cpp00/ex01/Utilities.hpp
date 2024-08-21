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