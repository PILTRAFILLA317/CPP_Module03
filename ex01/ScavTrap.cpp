#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " updated" << "\n";
}

ScavTrap::ScavTrap(const ScavTrap& obj){
	std::cout << "Scavtrap copy constructor called" << "\n";
	*this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& obj){
	std::cout << "Scavtrap assignation operator called" << "\n";
	if (this != &obj){
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return *this;
}

ScavTrap::ScavTrap(): ClapTrap(){
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " updated by default" << "\n";
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << _name << " destroyed" << "\n";
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode." << "\n";
}

void ScavTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" <<"\n";
	else if (this->_hitPoints == 0)
		std::cout << "ScavTrap " <<  this->_name << " is dead" << "\n";
	else if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " has not enough energy points to attack!" << "\n";
}
