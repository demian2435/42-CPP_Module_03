#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h> 

FragTra::FragTra(std::string name)
{
	std::srand (time(NULL));
	this->hitPoints = 100;
	this->maxHintPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoint = 100;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	std::cout << "So " << this->name << " detto "<< this->randomTag() << std::endl;
}

FragTra::~FragTra(void)
{
	std::cout << this->name << " sta m'picciato fracico e vie caricato da e guardie.."<< std::endl;
}

std::string FragTra::randomTag(void)
{
	const std::string tag[6] = {"er Catena", "er Caccolaro", "er Leccamuffo", "er Pantera", "o Zoppo", "Occhiopallino"};
	std::string myTag = tag[std::rand() % 6];
	const std::string comm[6] = {" e mi zio era er Libbanese"," e sta a veni pure mi cuggino er Camboggia"," e sto carico a pallettoni", " e qua comanno io", " n'do stanno che je parto!", " e sento puzza de pizze"};
	this->name += " " + myTag;
	return  myTag + comm[std::rand() % 6];
}

std::string FragTra::randomTagEnemy(void)
{
	const std::string tag[6] = {" er Puzzone", " l'Ammazza Topi", " er Venduto", " er Matto", " o Sverto", " l'Infame"};
	return tag[std::rand() % 6];
}

void FragTra::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " se mette a lancià e monetine contro " << target << this->randomTagEnemy() << ", causando sgomento e " << this->rangedAttackDamage <<" danni!" << std::endl;
}

void FragTra::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " je parte de capoccia a " << target << this->randomTagEnemy() << ", e je regala " << this->meleeAttackDamage <<" punti danno!" << std::endl;
}

void FragTra::takeDamage(unsigned int amount)
{
	int danno = amount - this->armorDamageReduction;
	if (danno > 0)
	{
		this->hitPoints -= danno;
		if (this->hitPoints < 0)
		{
			this->hitPoints = 0;
		}
		std::cout << "FR4G-TP " << this->name << " c'ha preso e pizze e pure " << danno << " danni!" << std::endl;
	}
	else
		danno = 0;
	std::cout << "FR4G-TP " << this->name << " c'ha preso na pizza ma nun se fatto gnente" << std::endl;
}

void FragTra::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHintPoints)
		this->hitPoints = this->maxHintPoints;
	std::cout << "FR4G-TP " << this->name << " se mette a vede la seconda staggione de Romanzo Criminale, e se ripija " << amount << " punti vita" << std::endl;
}

void FragTra::vaulthunter_dot_exe(std::string const & target)
{
	if (this->energyPoints < 25)
	{
		std::cout << "FR4G-TP " << this->name << " è annato n'coma etilico e deve da smartì a pezza" << std::endl;
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

void FragTra::special_1(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " je rubba er motorino a o zio de " << target << this->randomTagEnemy() << ", e je danneggia a reputazione giù aa bisca cosi che je fanno er cappottone pe la vergogna e se porta a casa " << this->rangedAttackDamage <<" punti danno" << std::endl;
}

void FragTra::special_2(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " je tira na crina sur petto a " << target << this->randomTagEnemy() << " cosi forte che je lascia a nicchia pe li fiori oltre a " << this->meleeAttackDamage <<" punti danno" << std::endl;
}

void FragTra::special_3(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " pia a mazzettate " << target << this->randomTagEnemy() << " e je regala " << this->meleeAttackDamage <<" punti danno" << std::endl;
}

void FragTra::special_4(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " je tira er telefonino n'capoccia a " << target << this->randomTagEnemy() << " che se pija " << this->rangedAttackDamage <<" punti danno" << std::endl;
}

void FragTra::special_5(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " chiama l'amici sua e insieme je fanno na chiusa a " << target << this->randomTagEnemy() << " che se s'aritrova co " << this->meleeAttackDamage <<" punti danno sur groppone" << std::endl;
}
