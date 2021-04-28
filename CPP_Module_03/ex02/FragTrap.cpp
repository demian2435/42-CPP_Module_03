#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h> 

FragTrap::FragTrap(std::string name): ClapTrap(name, 0) {
	std::cout << "So " << this->name << " detto "<< this->randomTag() << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->name << " sta m'picciato fracico e vie caricato da e guardie.." << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->energyPoints < 25)
	{
		std::cout << this->name << " è annato n'coma etilico e deve da smartì a pezza" << std::endl;
	}
	else
	{
		this->energyPoints -= 25;
		int attacco = rand() % 5;
		if (attacco == 0)
			this->special_1(target);
		else if (attacco == 1)
			this->special_2(target);
		else if (attacco == 2)
			this->special_3(target);
		else if (attacco == 3)
			this->special_4(target);
		else if (attacco == 4)
			this->special_5(target);
	}
}

void FragTrap::special_1(std::string const & target)
{
	std::cout << this->name << " je rubba er motorino a o zio de " << target << this->randomTagEnemy() << ", e je danneggia a reputazione giù aa bisca cosi che je fanno er cappottone pe la vergogna e se porta a casa " << this->rangedAttackDamage <<" punti danno" << std::endl;
}

void FragTrap::special_2(std::string const & target)
{
	std::cout << this->name << " je tira na crina sur petto a " << target << this->randomTagEnemy() << " cosi forte che je lascia a nicchia pe li fiori oltre a " << this->meleeAttackDamage <<" punti danno" << std::endl;
}

void FragTrap::special_3(std::string const & target)
{
	std::cout << this->name << " pia a mazzettate " << target << this->randomTagEnemy() << " e je regala " << this->meleeAttackDamage <<" punti danno" << std::endl;
}

void FragTrap::special_4(std::string const & target)
{
	std::cout << this->name << " je tira er telefonino n'capoccia a " << target << this->randomTagEnemy() << " che se pija " << this->rangedAttackDamage <<" punti danno" << std::endl;
}

void FragTrap::special_5(std::string const & target)
{
	std::cout << this->name << " chiama l'amici sua e insieme je fanno na chiusa a " << target << this->randomTagEnemy() << " che se s'aritrova co " << this->meleeAttackDamage <<" punti danno sur groppone" << std::endl;
}
