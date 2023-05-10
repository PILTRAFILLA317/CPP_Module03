#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Fragtrap " << this->_name << " updated to Fragtrap" << "\n";
}

FragTrap::FragTrap(): ClapTrap(){
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Fragtrap " << this->_name << " updated to Fragtrap by default" << "\n";
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << _name << " destroyed" << "\n";
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->_name << ": You want a high five? :D" << std::endl;
}

void FragTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" <<"\n";
	else if (this->_hitPoints == 0)
		std::cout << this->_name << " is dead" << "\n";
	else if (this->_energyPoints == 0)
		std::cout << "FragTrap " << this->_name << " has not enough energy points to attack!" << "\n";
}
