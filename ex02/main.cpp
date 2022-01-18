/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:05:37 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/18 16:10:17 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	s = "HI THIS IS BRAIN";
	std::string	*sp = &s;
	std::string	&sr = s;

	std::cout << &s << "\n";
	std::cout << sp << "\n";
	std::cout << &sr << "\n";

	std::cout << s << "\n";
	std::cout << *sp << "\n";
	std::cout << sr << "\n";
}