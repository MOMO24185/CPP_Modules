#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _inventory()
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Character " << _name << " is created" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	std::cout << "Character " << _name << " is destroyed" << std::endl;
}

Character::Character(const Character &src) : _name(src._name), _inventory()
{

	std::cout << "Character " << _name << " is created" << std::endl;
}

Character& Character::operator=(const Character &src)
{
	if (this == &src)
		return *this;
	_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	std::cout << "Character assignation operator called" << std::endl;
	return *this;
}

Character* Character::clone(Character *copy)
{
	if (this == copy)
		return this;
	_name = copy->getName();
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
		if (copy->_inventory[i])
			_inventory[i] = copy->_inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return (this);
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << "Materia " << m->getType() << " is equipped" << std::endl;
			return;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	std::cout << "Materia " << _inventory[idx]->getType() << " is unequipped" << std::endl;
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	_inventory[idx]->use(target);
}
