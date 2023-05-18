#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Fragtrap " << this->_name << " updated" << "\n";
}

FragTrap::FragTrap(): ClapTrap(){
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Fragtrap " << this->_name << " updated by default" << "\n";
}

FragTrap::FragTrap(const FragTrap& obj){
	std::cout << "Fragtrap copy constructor called" << "\n";
	*this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap& obj){
	std::cout << "Fragtrap assignation operator called" << "\n";
	if (this != &obj){
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << _name << " destroyed" << "\n";
}

void FragTrap::highFivesGuys(){
	if (this->_hitPoints > 0)
		std::cout << "FragTrap " << this->_name << ": You want a high five? :D" << std::endl;
	else
		std::cout << "Fragtrap "  << this->_name << "can't high five becouse it is dead" << "\n";
}

void FragTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" <<"\n";
	else if (this->_hitPoints == 0)
		std::cout << "Fragtrap "  << this->_name << " is dead" << "\n";
	else if (this->_energyPoints == 0)
		std::cout << "FragTrap " << this->_name << " has not enough energy points to attack!" << "\n";
}
