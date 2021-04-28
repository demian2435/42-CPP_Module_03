#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#define BLUE "\033[0;34m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define CYAN "\033[0;36m"
#define OFF "\033[0m"

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
	std::cout << BLUE << "SUPER COSTRUTTORE" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << BLUE << "SUPER DISTRUTTORE" << OFF << std::endl;
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
	if (this->type == 0 || this->type == 3)
		std::cout << RED << this->name << " se mette a lancià e monetine contro " << target << this->randomTagEnemy() << ", causando sgomento e " << this->rangedAttackDamage <<" danni!" << std::endl;
	else if (this->type == 1)
		std::cout << GREEN << this->name << " je scozza a " << target << this->randomTagEnemy() << " purgandolo de " << this->rangedAttackDamage <<" danni" << std::endl;
	else if (this->type == 2)
		std::cout << YELLOW << "A " << this->name << " je basta guardà " << target << this->randomTagEnemy() << " che je ammolla " << this->rangedAttackDamage <<" punti danno" << std::endl;
	else
		std::cout << BLUE << "** TIPO NON RICONOSCIUTO **" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	if (this->type == 0)
		std::cout << RED << this->name << " je parte de capoccia a " << target << this->randomTagEnemy() << ", e je regala " << this->meleeAttackDamage <<" punti danno!" << std::endl;
	else if (this->type == 1)
		std::cout << GREEN << this->name << " tocca co un dito " << target << this->randomTagEnemy() << " e lo parcheggia co " << this->meleeAttackDamage <<" punti danno" << std::endl;
	else if (this->type == 2 || this->type == 3)
		std::cout << YELLOW << "A " << this->name << " je basta move le mani che a " << target << this->randomTagEnemy() << " je partono pe la tangenziale " << this->meleeAttackDamage <<" punti danno" << std::endl;	
	else
		std::cout << BLUE << "** TIPO NON RICONOSCIUTO **" << std::endl;
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
			std::cout << RED << this->name << " c'ha preso e pizze e pure " << danno << " danni!" << std::endl;
		else if (this->type == 1)
			std::cout << GREEN << this->name << " riceve un vocale daa regazza che je spoilera Suburra, " << danno << " danni e a catena" << std::endl;
		else if (this->type == 2)
			std::cout << YELLOW << this->name << " pe fa vede che è er più mejo se pia a schiaffi da solo e se procura " << danno << " danni" << std::endl;
		else if (this->type == 3)
			std::cout << CYAN << this->name << " oggi se sete bbono e se cancella " << danno << " punti vita pe fa le cose pari" << std::endl;	
		else
			std::cout << BLUE << "** TIPO NON RICONOSCIUTO **" << std::endl;
	}
	else
	{
		if (this->type == 0)
			std::cout << RED;
		else if (this->type == 1)
			std::cout << GREEN;
		else if (this->type == 2)
			std::cout << YELLOW;
		else if (this->type == 3)
			std::cout << CYAN;
		else
			std::cout << BLUE;
		std::cout << this->name << " c'ha preso na pizza ma nun se fatto gnente" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHintPoints)
		this->hitPoints = this->maxHintPoints;
	if (this->type == 0)
		std::cout << RED << this->name << " se mette a vede la seconda staggione de Romanzo Criminale, e se ripija " << amount << " punti vita" << std::endl;
	else if (this->type == 1)
		std::cout << GREEN << this->name << " va a fa aperitivo a Parioli co l'amici in de Roma nord e se ricarica de " << amount << " punti vita" << std::endl;
	else if (this->type == 2)
		std::cout << YELLOW << this->name << " se beve na boccia de romanella e recupera " << amount << " punti vita" << std::endl;	
	else if (this->type == 3)
		std::cout << CYAN << this->name << " respira e se ricarica de " << amount << " punti vita" << std::endl;	
	else
		std::cout << BLUE << "** TIPO NON RICONOSCIUTO **" << std::endl;
}

std::string ClapTrap::getName(void)
{
	return this->name;
}
