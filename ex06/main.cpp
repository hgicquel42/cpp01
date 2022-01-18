/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:01:51 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/18 18:28:28 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	Karen	karen;
	std::string moods[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	
	if (argc != 2)
		return (1);
	i = 0;
	while (i < 4)
	{
		if (moods[i] == argv[1])
			break ;
		i++;
	}
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
		return (1);
	}
	karen.complain(i);
	return (0);
}