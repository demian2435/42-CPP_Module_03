/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:15:18 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 11:15:53 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string name);
		~SuperTrap(void);
};
