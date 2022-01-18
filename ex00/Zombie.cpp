/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:07:12 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/18 15:30:10 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name):
	name(name)
{}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->name << ">" << " ";
	std::cout << "Destroyed" << "\n";
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << ">" << " ";
	std::cout << "BraiiiiiiinnnzzzZ..." << "\n";
}
