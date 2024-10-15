#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "wrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const& wrongCat);
		virtual ~WrongCat();
		WrongCat& operator=(WrongCat const& wrongCat);
		void makeSound() const;
};

#endif