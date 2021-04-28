#pragma once
#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		void challengeNewcomer(std::string const & target);
};
