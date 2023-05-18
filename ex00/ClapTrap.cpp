#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 10;
	std::cout << "Claptrap " << this->_name << " is alive" << "\n";
}

ClapTrap::~ClapTrap(){
	std::cout << "Claptrap " << this->_name << " Default destructor called" << "\n";
}

ClapTrap::ClapTrap(){
	this->_name = "Nobody";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 10;
	std::cout << "Claptrap Nobody is alive" << "\n";
}

ClapTrap::ClapTrap(const ClapTrap& obj){
	std::cout << "Claptrap copy constructor called" << "\n";
	*this = obj;
}

void ClapTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" <<"\n";
	else if (this->_hitPoints == 0)
		std::cout << "Claptrap " << this->_name << " is dead" << "\n";
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " has not enough energy points to attack!" << "\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap& obj){
	std::cout << "Claptrap assignation operator called" << "\n";
	if (this != &obj){
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return *this;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints <= 0){
		std::cout << "Claptrap " << this->_name << " is dead" << "\n";
		return ;
	}
	if (this->_hitPoints <= amount){
		this->_hitPoints = 0;
		std::cout << "Claptrap " << this->_name << " took " << amount << " damage points!" << "\n";
		std::cout << "Claptrap " << this->_name << " died!" << "\n";
		std::cout << "Claptrap " << this->_name << " has " << this->_hitPoints << " hit points!" << "\n";
	}
	else{
		std::cout << "Claptrap " << this->_name << " took " << amount << " damage points!" << "\n";
		this->_hitPoints -= amount;
		std::cout << "Claptrap " << this->_name << " has " << this->_hitPoints << " hit points!" << "\n";
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		std::cout << "Claptrap " << this->_name << " repaired " << amount << " hit points!" << "\n";
		_energyPoints --;
		this->_hitPoints += amount;
	}
	else if (this->_hitPoints == 0)
		std::cout << "Claptrap " << this->_name << " is dead" << "\n";
	else if (this->_energyPoints == 0)
		std::cout << "Claptrap " << this->_name << " has not enough energy points to attack!" << "\n";
}

int ClapTrap::health(void){
	return this->_hitPoints;
}