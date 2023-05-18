#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string		_name;
		using		FragTrap::_hitPoints;
		using		ScavTrap::_energyPoints;
		using		FragTrap::_attackDamage;
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap();
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap &operator=(const DiamondTrap &obj);
		void whoAmI(void);
		using ScavTrap::attack;
};

#endif