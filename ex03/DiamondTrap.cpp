#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("DiamondTrap_clap_name"), ScavTrap("DiamondTrap_clap_name"), FragTrap("DiamondTrap_clap_name"), name("DiamondTrap")
{
	health = 100;
	energy = 50;
	damage = 30;
	std::cout << "DiamondTrap default constructor called for " << this->name << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), name(name)
{
	health = 100;
	energy = 50;
	damage = 30;
	std::cout << "DiamondTrap constructor called for " << this->name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
{
	*this = other;
	std::cout << "DiamondTrap copy constructor called for " << this->name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		name = other.name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for " << this->name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << name << " and ClapTrap name is " << ClapTrap::name << std::endl;
}
