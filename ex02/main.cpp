#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap c("Clappy");
	c.attack("target");
	c.takeDamage(4);
	c.beRepaired(1);

	{
		ScavTrap s("Serena");
		s.attack("bandit");
		s.takeDamage(40);
		s.beRepaired(10);
		s.guardGate();
	}

	ScavTrap s1("S1");
	ScavTrap s2(s1);
	ScavTrap s3;
	s3 = s1;
	s2.attack("dummy");
	s3.guardGate();

	{
		FragTrap f("Fraggy");
		f.attack("boss");
		f.takeDamage(20);
		f.beRepaired(12);
		f.highFivesGuys();
	}

	FragTrap f1("F1");
	FragTrap f2(f1);
	FragTrap f3;
	f3 = f1;
	f2.attack("dummy2");
	f3.highFivesGuys();

	return (0);
}
