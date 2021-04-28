#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

ClapTrap::ClapTrap(std::string name, int type)
{
	this->hitPoints = 100;
	this->maxHintPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoint = 100;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->type = type;
	std::cout << "SUPER COSTRUTTORE" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "SUPER DISTRUTTORE" << std::endl;
}

std::string ClapTrap::randomTag(void)
{
	const std::string tag[12] = {"er Catena", "er Caccolaro", "er Leccamuffo", "er Pantera", "o Zoppo", "Occhiopallino","er Monnezzaro", "er Torinese", "er Benzinaro", "er Tigre", "er Re de Frosinone", "er Batman de Monteverde"};
	std::string myTag = tag[std::rand() % 12];
	const std::string comm[9] = {" e mi zio era er Libbanese"," e sta a veni pure mi cuggino er Camboggia"," e sto carico a pallettoni", " e qua comanno io", " n'do stanno che je parto!", " e sento puzza de pizze", " e so stato du anni ar gabbio"," trasteverino vecchia scuola"," ma detto n'amico che te serve na mano"};
	this->name += " " + myTag;
	return  myTag + comm[std::rand() % 6];
}

std::string ClapTrap::randomTagEnemy(void)
{
	const std::string tag[12] = {" er Puzzone", " l'Ammazza Topi", " er Venduto", " er Matto", " o Sverto", " l'Infame", " er Simpatico", " Cucchiaino", " er Pecoraro", " er Cipolla", " o Juventino", " o Storpio"};
	return tag[std::rand() % 12];
}

void ClapTrap::rangedAttack(std::string const & target)
{
	if (this->type == 0)
		std::cout << this->name << " se mette a lancià e monetine contro " << target << this->randomTagEnemy() << ", causando sgomento e " << this->rangedAttackDamage <<" danni!" << std::endl;
	else if (this->type == 1)
		std::cout << this->name << " je scozza a " << target << this->randomTagEnemy() << " purgandolo de " << this->rangedAttackDamage <<" danni" << std::endl;
	else
		std::cout << "** TIPO NON RICONOSCIUTO **" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	if (this->type == 0)
		std::cout << this->name << " je parte de capoccia a " << target << this->randomTagEnemy() << ", e je regala " << this->meleeAttackDamage <<" punti danno!" << std::endl;
	else if (this->type == 1)
		std::cout << this->name << " tocca co un dito " << target << this->randomTagEnemy() << " e lo parcheggia co " << this->meleeAttackDamage <<" punti danno" << std::endl;
	else
		std::cout << "** TIPO NON RICONOSCIUTO **" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int danno = amount - this->armorDamageReduction;
	if (danno > 0)
	{
		this->hitPoints -= danno;
		if (this->hitPoints < 0)
			this->hitPoints = 0;
		if (this->type == 0)
			std::cout << this->name << " c'ha preso e pizze e pure " << danno << " danni!" << std::endl;
		else if (this->type == 1)
			std::cout << this->name << " riceve un vocale daa regazza che je spoilera Suburra, " << danno << " danni e a catena" << std::endl;
		else
			std::cout << "** TIPO NON RICONOSCIUTO **" << std::endl;
	}
	else
		std::cout << this->name << " c'ha preso na pizza ma nun se fatto gnente" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHintPoints)
		this->hitPoints = this->maxHintPoints;
	if (this->type == 0)
		std::cout << this->name << " se mette a vede la seconda staggione de Romanzo Criminale, e se ripija " << amount << " punti vita" << std::endl;
	else if (this->type == 1)
		std::cout << this->name << " va a fa aperitivo a Parioli co l'amici in de Roma nord e se ricarica de " << amount << " punti vita" << std::endl;
	else
		std::cout << "** TIPO NON RICONOSCIUTO **" << std::endl;
}
