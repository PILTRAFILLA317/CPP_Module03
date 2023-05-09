#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ClapTrap a;
		ClapTrap b("Jose");
		ScavTrap c("Puto");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << "Nobody has " << a.health() << " hp \n";
		a.attack("some other robot");
		c.attack("Jose D:");
		a.takeDamage(9);
		std::cout << "Puto has " << c.health() << " hp \n";
		c.takeDamage(5);
		a.beRepaired(5);
		std::cout << "Nobody has " << a.health() << " hp \n";
		a.takeDamage(7);
		a.attack("some other other robot");
		b.beRepaired(3);
		std::cout << "Jose has " << b.health() << " hp \n";
		for (int i = 0; i < 5; i++)
			b.attack("Jose-clone");
		b.beRepaired(3);
		std::cout << "Jose has " << b.health() << " hp \n";
		c.beRepaired(4);
		std::cout << "Puto has " << c.health() << " hp \n";
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
}