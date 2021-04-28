#pragma once
#include <string>

class ClapTrap
{
	protected:
		int hitPoints;
		int maxHintPoints;
		int energyPoints;
		int maxEnergyPoint;
		int level;
		std::string name;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageReduction;
		int type;
		std::string randomTag(void);
		std::string randomTagEnemy(void);
	public:
		ClapTrap(std::string name, int type);
		~ClapTrap(void);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void);
};
