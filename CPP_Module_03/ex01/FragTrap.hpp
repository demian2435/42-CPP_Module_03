/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:13:26 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 11:13:27 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class FragTrap
{
	private:
		int hitPoints;
		int maxHintPoints;
		int energyPoints;
		int maxEnergyPoint;
		int level;
		std::string name;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageReduction;
		std::string randomTag(void);
		std::string randomTagEnemy(void);
		void special_1(std::string const & target);
		void special_2(std::string const & target);
		void special_3(std::string const & target);
		void special_4(std::string const & target);
		void special_5(std::string const & target);
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
};
