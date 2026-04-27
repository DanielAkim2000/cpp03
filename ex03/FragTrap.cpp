#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
	health = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap default constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	health = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap constructor called for " << this->name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap copy constructor called for " << name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}
