#include "SuperTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>
#define CYAN "\033[0;36m"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 3), FragTrap(name), NinjaTrap(name)
{
	this->energyPoints = 120;
	this->maxEnergyPoint = 120;
	this->meleeAttackDamage = 60;
	std::cout << CYAN << "So " << this->name << " detto "<< "er Gigante e a casa nun ve manno" << std::endl;
	this->name = this->name + " er Gigante";
}

SuperTrap::~SuperTrap(void)
{
	std::cout << CYAN << this->name << " sè iscritto alla 42 e ha cambiato stile de vita.." << std::endl;
}
