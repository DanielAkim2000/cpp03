#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap c("Clappy");
	c.attack("target");
	c.takeDamage(3);
	c.beRepaired(2);

	{
		ScavTrap s("Serena");
		s.attack("bandit");
		s.takeDamage(35);
		s.beRepaired(8);
		s.guardGate();
	}

	ScavTrap first("First");
	ScavTrap copy(first);
	ScavTrap assigned;
	assigned = first;
	copy.attack("dummy");
	assigned.guardGate();

	return (0);
}
