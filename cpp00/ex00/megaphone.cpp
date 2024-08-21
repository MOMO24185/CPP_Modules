#include <iostream> 
#include <ostream>
 
int main (int argn, char **argv) 
{ 
	if (argn == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (argn > 1)
	{
		int i = 0, j = 0;

		while (i < argn)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] -= 32;
				j++;
			}
			i++;
		}
		i = 0;
		while (++i < argn)
			std::cout << argv[i];
	}
	std::cout << std::endl;
	return 0; 
}