#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap c("Clappy");
	c.attack("target");
	c.takeDamage(2);
	c.beRepaired(1);

	{
		ScavTrap s("Serena");
		s.attack("bandit");
		s.takeDamage(30);
		s.beRepaired(8);
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
		f.takeDamage(15);
		f.beRepaired(5);
		f.highFivesGuys();
	}

	FragTrap f1("F1");
	FragTrap f2(f1);
	FragTrap f3;
	f3 = f1;
	f2.attack("dummy2");
	f3.highFivesGuys();

	{
		DiamondTrap d("Diamond");
		d.attack("final_boss");
		d.takeDamage(10);
		d.beRepaired(4);
		d.whoAmI();
		d.highFivesGuys();
		d.guardGate();
	}

	DiamondTrap d1("D1");
	DiamondTrap d2(d1);
	DiamondTrap d3;
	d3 = d1;
	d2.whoAmI();
	d3.attack("dummy3");

	return (0);
}
