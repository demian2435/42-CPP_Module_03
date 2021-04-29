/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:14:12 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 11:15:23 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 1) {
	this->energyPoints = 50;
	this->maxEnergyPoint = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	std::cout << "So " << this->name << " detto "<< this->randomTag() << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->name << 	" e annato aa festa de a regazza e nun risponne ar telefeno.." << std::endl;
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
