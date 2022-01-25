/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:07:12 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 11:46:41 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name):
	name(name)
{}

Zombie::~Zombie(void)
{
	std::cout << this->name << " ";
	std::cout << "died" << "\n";
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << "\n";
}
