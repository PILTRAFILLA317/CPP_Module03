#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap();
		ScavTrap(const ScavTrap &obj);
		ScavTrap &operator=(const ScavTrap &obj);
		void guardGate();
		void attack(const std::string& target);
};

#endif
