/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:40:32 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 12:05:28 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << "\n";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << "\n";
	std::cout << "I just love it!" << "\n";
	std::cout << "\n";
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << "\n";
	std::cout << "I cannot believe adding extra bacon cost more money." << "\n";
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << "\n";
	std::cout << "\n";
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << "\n";
	std::cout << "I think I deserve to have some extra bacon for free." << "\n";
	std::cout << "I’ve been coming here for years and you just started working here last month." << "\n";
	std::cout << "\n";
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << "\n";
	std::cout << "This is unacceptable, I want to speak to the manager now." << "\n";
	std::cout << "\n";
}

void	Karen::complain(std::string level)
{
	int	i;
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Karen::*methods[])(void) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };

	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
			return (this->*methods[i])();
		i++;
	}
}

void	Karen::filter(std::string level)
{
	int			i;
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
			break ;
	}
}