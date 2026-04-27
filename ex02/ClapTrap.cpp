#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unnamed"), health(10), energy(10), damage(0)
{
	std::cout << "ClapTrap default constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), health(10), energy(10), damage(0)
{
	std::cout << "ClapTrap constructor called for " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "ClapTrap copy constructor called for " << name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		health = other.health;
		energy = other.energy;
		damage = other.damage;
		name = other.name;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (health <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot attack: no hit points left." << std::endl;
		return;
	}
	if (energy <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot attack: no energy points left." << std::endl;
		return;
	}
	--energy;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
			  << damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (health <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot repair: no hit points left." << std::endl;
		return;
	}
	if (energy <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot repair: no energy points left." << std::endl;
		return;
	}
	--energy;
	health += static_cast<int>(amount);
	std::cout << "ClapTrap " << name << " repairs itself and gains " << amount
			  << " hit points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (health <= 0)
	{
		std::cout << "ClapTrap " << name << " is already destroyed." << std::endl;
		return;
	}
	if (amount >= static_cast<unsigned int>(health))
		health = 0;
	else
		health -= static_cast<int>(amount);
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!"
			  << std::endl;
}
