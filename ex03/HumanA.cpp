/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:19:03 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/18 16:26:49 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon):
	name(name),
	weapon(weapon)
{}

void	HumanA::attack(void)
{
	std::cout << this->name << " ";
	std::cout << "attacks with his" << " ";
	std::cout << this->weapon.getType() << "\n";
}