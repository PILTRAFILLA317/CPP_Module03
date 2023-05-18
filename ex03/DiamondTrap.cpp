#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name){
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "Diamondtrap " << this->_name << " updated to Diamondtrap" << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj){
	std::cout << "Diamondtrap copy constructor called" << "\n";
	*this = obj;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& obj){
	std::cout << "Diamondtrap assignation operator called" << "\n";
	if (this != &obj){
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->_name << " destroyed" << "\n";
}

DiamondTrap::DiamondTrap(): ScavTrap("Nobody_clap_name"){
	this->_name = "Nobody";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	ClapTrap::_name = "Nobody_clap_name";
	std::cout << this->_name << " updated to Diamondtrap by default" << "\n";
}

void DiamondTrap::whoAmI(){
	std::cout << "Diamondtraps name is " << this->_name << "\n";
	std::cout << "Diamondtraps Clap name is " << ScavTrap::_name << "\n";
}