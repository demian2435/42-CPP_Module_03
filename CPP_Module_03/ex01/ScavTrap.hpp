/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:13:38 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 11:13:39 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ScavTrap
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
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(std::string const & target);
};
