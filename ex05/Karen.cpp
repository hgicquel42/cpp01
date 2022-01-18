/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:40:32 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/18 17:58:53 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << " ";
	std::cout << "I just love it!" << "\n";
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money." << " ";
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << "\n";
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free." << " ";
	std::cout << "I’ve been coming here for years and you just started working here last month." << "\n";
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << "\n";
}

void	Karen::complain(std::string level)
{
	int	i;
	std::string levels[] = { "debug", "info", "warning", "error" };
	void (Karen::*methods[])(void) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };

	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
			return (this->*methods[i])();
		i++;
	}
}