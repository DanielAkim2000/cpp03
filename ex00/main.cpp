#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Alpha1");
	ClapTrap b("Alpha2");

	a.attack("target_dummy");
	a.takeDamage(3);
	a.beRepaired(2);

	b.takeDamage(20);
	b.attack("someone");
	b.beRepaired(5);

	for (int i = 0; i < 12; ++i)
		a.attack("wall");

	a.beRepaired(1);

	return (0);
}
