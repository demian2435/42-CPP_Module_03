#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		void ninjaShoebox(ClapTrap & other);
		void ninjaShoebox(FragTrap & other);
		void ninjaShoebox(ScavTrap & other);
		void ninjaShoebox(NinjaTrap & other);
};
