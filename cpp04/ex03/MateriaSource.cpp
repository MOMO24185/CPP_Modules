#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _inventory()
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	std::cout << "MateriaSource Destructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	std::cout << "MateriaSource Copy constructor called" << std::endl;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	std::cout << "MateriaSource Assignation operator called" << std::endl;
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << "MateriaSource: Can't learn a NULL materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << "Materia (" << m->getType() << ") learned within slot: " << i << std::endl;
			return ;
		}
	}
	std::cout << "Cannot learn new Materia: Inventory is full" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
		{
			std::cout << "Materia (" << type << ") created from slot: " << i << std::endl;
			return _inventory[i]->clone();
		}
	}
	std::cout << "Materia (" << type << ") not found in inventory" << std::endl;
	return NULL;
}