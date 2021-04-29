/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:14:59 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 11:15:23 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
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
