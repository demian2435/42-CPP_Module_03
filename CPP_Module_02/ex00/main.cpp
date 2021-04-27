#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "**BENEVNUTO SU FRAGTRA CRIMINALE **" << std::endl;
	FragTra f = FragTra("Mario");
	f.rangedAttack("Giuseppe");
	f.takeDamage(150);
	f.meleeAttack("Pippo");
	f.beRepaired(50);
	f.vaulthunter_dot_exe("Gino");
	f.vaulthunter_dot_exe("Sandro");
	f.vaulthunter_dot_exe("Filippo");
	f.vaulthunter_dot_exe("Kabir");
	f.vaulthunter_dot_exe("Luca");
}
