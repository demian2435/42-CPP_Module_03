#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h> 

ScavTrap::ScavTrap(std::string name)
{
	std::srand (time(NULL));
	this->hitPoints = 100;
	this->maxHintPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoint = 50;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	std::cout << "So " << this->name << " detto "<< this->randomTag() << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->name << " e annato aa festa de a regazza e nun risponne ar telefeno.."<< std::endl;
}

std::string ScavTrap::randomTag(void)
{
	const std::string tag[6] = {"er Monnezzaro", "er Torinese", "er Benzinaro", "er Tigre", "er Re de Frosinone", "er Batman de Monteverde"};
	std::string myTag = tag[std::rand() % 6];
	const std::string comm[3] = {" e so stato du anni ar gabbio"," trasteverino vecchia scuola"," ma detto n'amico che te serve na mano"};
	this->name += " " + myTag;
	return  myTag + comm[std::rand() % 3];
}

std::string ScavTrap::randomTagEnemy(void)
{
	const std::string tag[6] = {" er Simpatico", " Cucchiaino", " er Pecoraro", " er Cipolla", " o Juventino", " o Storpio"};
	return tag[std::rand() % 6];
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << this->name << " je scozza a " << target << this->randomTagEnemy() << " purgandolo de " << this->rangedAttackDamage <<" danni" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << this->name << " tocca co un dito " << target << this->randomTagEnemy() << " e lo parcheggia co " << this->meleeAttackDamage <<" punti danno" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	int danno = amount - this->armorDamageReduction;
	if (danno > 0)
	{
		this->hitPoints -= danno;
		if (this->hitPoints < 0)
		{
			this->hitPoints = 0;
		}
		std::cout << this->name << " riceve un vocale daa regazza che je spoilera Suburra, " << danno << " danni e a catena" << std::endl;
	}
	else
		std::cout << this->name << " pare che nun se fatto gnente" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHintPoints)
		this->hitPoints = this->maxHintPoints;
	std::cout << this->name << " va a fa aperitivo a Parioli co l'amici in de Roma nord e se ricarica de " << amount << " punti vita" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenge[9] = {": MA CHE T'ASCIUGHI LI CAPELLI CO A CARTA DE A PIZZA?",
								": FAI TARMENTE SCHIFO CHE QUANNO T'HANNO PARTORITO NUN ERI TU CHE PIAGNEVI, MA TU' MADRE",
								": SE ER VINO NUN LO REGGI L'UVA MAGNATELA A CHICCHI!",
								": SEI TARMENTE BRUTTO CHE TU MADRE TE CHIAMA BELLO DE ZIA",
								": SI TE PIJO CO N'DESTRO T'AMMISCHIO ER MOCCIOLO CO A SALIVA",
								": SI NUN TE LEVI TE SCROCIO DAA TESTA AI PIEDI CHE QUANNO TORNI A CASA NUN T'ARICONOSCONO!",
								": ABBOZZA CHE SINNÒ TE PIEGO COME 'NA MAJETTA",
								": TE DO 'N CARCIO CHE PE' DATTENE 'N'ANTRO TE DEVO VENÌ A CERCÀ!",
								": A CHICCO TE RIBBALTO COME NA COTOLETTA"};

	std::cout << this->name << " je dice a " << target << this->randomTagEnemy() << challenge[std::rand() % 9] << std::endl;
}
