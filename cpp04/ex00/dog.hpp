#ifndef DOG_HPP
# define DOG_HPP

# include "animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const& dog);
		virtual ~Dog();
		Dog& operator=(Dog const& dog);
		void makeSound() const;
};

#endif
