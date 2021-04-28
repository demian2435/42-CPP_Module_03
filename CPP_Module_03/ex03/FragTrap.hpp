#pragma once
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		void special_1(std::string const & target);
		void special_2(std::string const & target);
		void special_3(std::string const & target);
		void special_4(std::string const & target);
		void special_5(std::string const & target);
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		void vaulthunter_dot_exe(std::string const & target);
};
