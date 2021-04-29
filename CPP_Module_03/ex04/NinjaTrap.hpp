/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:15:07 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 11:15:23 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
