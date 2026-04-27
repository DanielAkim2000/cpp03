#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
	health = 100;
	energy = 50;
	damage = 20;
	std::cout << "ScavTrap default constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	health = 100;
	energy = 50;
	damage = 20;
	std::cout << "ScavTrap constructor called for " << this->name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "ScavTrap copy constructor called for " << name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << name << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (health <= 0)
	{
		std::cout << "ScavTrap " << name << " cannot attack: no hit points left." << std::endl;
		return;
	}
	if (energy <= 0)
	{
		std::cout << "ScavTrap " << name << " cannot attack: no energy points left." << std::endl;
		return;
	}
	--energy;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
			  << damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
