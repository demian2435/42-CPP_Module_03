/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:15:02 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 11:15:23 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"
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
	ScavTrap s = ScavTrap("Sandrino");
	f.beRepaired(50);
	f.vaulthunter_dot_exe("Gino");
	s.meleeAttack("Pino");
	f.vaulthunter_dot_exe("Paoletto");
	s.challengeNewcomer("Yari");
	s.challengeNewcomer("Chtistian");
	f.takeDamage(5);
	NinjaTrap n = NinjaTrap("Michelino");
	s.challengeNewcomer("Federico");
	n.meleeAttack("Alfredino");
	f.vaulthunter_dot_exe("Luca");
	n.rangedAttack("Robbertino");
	s.rangedAttack("Saverio");
	SuperTrap ss = SuperTrap("Cristoforo");
	ss.ninjaShoebox(n);
	ss.beRepaired(120);
	s.takeDamage(25);
	s.beRepaired(10);
	ss.meleeAttack("Domenico");
	ss.vaulthunter_dot_exe("Giggi");
	s.challengeNewcomer("Peppino");
	n.takeDamage(15);
	n.ninjaShoebox(s);
	ss.takeDamage(20);
	n.beRepaired(28);
	ss.rangedAttack("Jacopino");
	n.ninjaShoebox(f);
	return (0);
}
