#ifndef CAT_HPP
# define CAT_HPP

# include "animal.hpp"
# include "brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const& cat);
		virtual ~Cat();
		Cat& operator=(Cat const& cat);
		void makeSound() const;
	private:
		Brain* brain;
};

#endif
