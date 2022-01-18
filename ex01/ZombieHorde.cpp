/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:19:38 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/18 15:41:17 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int n, std::string name)
{
	int		i;
	Zombie	*p;

	i = 0;
	p = new Zombie[n];
	while (i < n)
		p[i++].rename(name);
	return (p);
}
