/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:32:07 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/18 15:57:47 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int n, std::string name);

int	main(void)
{
	int		i;
	int		n;
	Zombie *p;

	n = 10;
	p = zombieHorde(n, "Zombar");
	i = 0;
	while (i < n)
		p[i++].announce();
	delete[] p;
}
