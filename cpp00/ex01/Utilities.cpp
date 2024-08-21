#include "Utilities.hpp"

bool Utilities::is_alpha(std::string str)
{
	for (int i = 0; str[i]; i++) {
		if ((str[i] > 'Z' && str[i] < 'a') || str[i] < 'A' || str[i] > 'z')
			return (false);
	}
	return (true);
}

bool Utilities::is_digit(std::string str)
{
	for (int i = 0; str[i]; i++) {
		if (str[i] < '0' || str[i] > '9')
			return (false);
	}
	return (true);
}

bool Utilities::is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v');
}

//Returns fase if count overflows past the max int number of digits
static bool	overflow_check(int count)
{
	if (count > 19)
		return (false);
	return (true);
}

bool Utilities::positive_atoi(const char *str, int *out)
{
	int					count;
	long long			result;
	int					minus_sign;

	count = 0;
	result = 0;
	minus_sign = 1;
	if (!Utilities::is_digit(str) || str[count] == '-')
		return (false);
	if (str[count] == '+')
		count++;
	while (str[count])
	{
		result *= 10;
		result += str[count++] - '0';
		if (!overflow_check(count))
			return (false);
	}
	if (result * minus_sign > INT_MAX || result * minus_sign < INT_MIN)
		return (false);
	*out = result * minus_sign;
	return (true);
}