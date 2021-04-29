/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:14:09 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 11:14:09 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h> 

int main(void)
{
	std::srand(time(NULL));
	std::cout << "**BENEVNUTO SU ROBOT CRIMINALE **" << std::endl;
	FragTrap f = FragTrap("Mario");
	f.rangedAttack("Giuseppe");
	f.takeDamage(40);
	f.meleeAttack("Pippo");
	f.beRepaired(50);
	f.vaulthunter_dot_exe("Gino");
	f.vaulthunter_dot_exe("Paoletto");
	ScavTrap s = ScavTrap("Sandrino");
	s.challengeNewcomer("Yari");
	s.meleeAttack("Pino");
	s.challengeNewcomer("Chtistian");
	f.vaulthunter_dot_exe("Filippo");
	f.takeDamage(5);
	s.challengeNewcomer("Federico");
	f.vaulthunter_dot_exe("Kabir");
	f.vaulthunter_dot_exe("Luca");
	s.rangedAttack("Saverio");
	s.takeDamage(25);
	s.beRepaired(10);
	s.challengeNewcomer("Peppino");
	return (0);
}
