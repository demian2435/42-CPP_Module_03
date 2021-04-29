/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:14:36 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 11:15:23 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#define BLUE "\033[0;34m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define RED "\033[0;31m"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 2) {
	this->hitPoints = 60;
	this->maxHintPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoint = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	std::cout << YELLOW << "So " << this->name << " detto "<< this->randomTag() << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << YELLOW << this->name << " e annato via che domana matina alle 4:45 deve annà a scaricà a frutta ar mercato.." << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap & other)
{
	std::cout <<"Quannno che " << BLUE << other.getName() << YELLOW << " saccorge de " << this->name << " e già troppo tardi"<< std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & other)
{
	std::cout << "Gira voce che " << RED << other.getName() << YELLOW << " e n'amico de n'amico de n'amico de Ferruccio er Pesciarolo, e pe questo " << this->name << " o lassa perde" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & other)
{
	std::cout << "A " << this->name << " i chiacchieroni nun je so mai piaciuti, però " << GREEN << other.getName() << YELLOW << " sembra simpatico e pe questo je molla na crina ma co la mano aperta" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & other)
{
	std::cout << this->name << " scopre che " << other.name << " e su cuggino e se vanno a beve na biretta da Franco er Baffone" << std::endl;
}
