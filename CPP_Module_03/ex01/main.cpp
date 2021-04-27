#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "**BENEVNUTO SU FRAGTRA CRIMINALE **" << std::endl;
	FragTra f = FragTra("Mario");
	f.rangedAttack("Giuseppe");
	f.takeDamage(40);
	f.meleeAttack("Pippo");
	f.beRepaired(50);
	f.vaulthunter_dot_exe("Gino");
	f.vaulthunter_dot_exe("Sandro");
	f.vaulthunter_dot_exe("Filippo");
	f.takeDamage(5);
	f.vaulthunter_dot_exe("Kabir");
	f.vaulthunter_dot_exe("Luca");
	ScavTrap s = ScavTrap("Mirko");
	s.meleeAttack("Pino");
	s.rangedAttack("Saverio");
	s.takeDamage(25);
	s.beRepaired(10);
	s.challengeNewcomer("Federico");
	return (0);
}
