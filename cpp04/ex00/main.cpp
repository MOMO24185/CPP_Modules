#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Cat();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	j->makeSound(); //will output the cat sound!
	i->makeSound(); //will output the wrong animal sound!

	meta->makeSound();
	wrongMeta->makeSound();

	return 0;
}