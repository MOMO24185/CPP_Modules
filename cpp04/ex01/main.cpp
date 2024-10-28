#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int main()
{
	Animal* animals[100];
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	for(int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for(int i = 0; i < 100; i++)
		delete animals[i];

	delete j;
	delete i;
	return 0;
}
